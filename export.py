from typing import Tuple, Dict, List
from tinygrad.helpers import DType, dtypes
from tinygrad.tensor import Device, Tensor
from tinygrad.jit import TinyJit
from tinygrad.nn.state import get_state_dict
from tinygrad.codegen.linearizer import Linearizer
from tinygrad.runtime.ops_clang import renderer
from tqdm import tqdm
import json
import os

def dtype_to_clang_type(s: str):
  if (s == "int8"):
    return "int8_t"
  if (s == "float32"):
    return "float"
  return s

def get_byte(dtype: DType):
  if dtype == dtypes.float:
    return 4
  if dtype == dtypes.float16:
    return 2
  if dtype == dtypes.int8:
    return 1

def compile_net(
    run:TinyJit,
    special_names:Dict[int,str]
  ) -> Tuple[
    Dict[str,str],
    List[Tuple[str,List[str],List[int]]],
    Dict[str,Tuple[int,DType,int]],
    Dict[str,Tensor]
  ]:
  functions, bufs, bufs_to_save, statements, bufnum = {}, {}, {}, [], 0
  buf_offsets = {}
  byte_offset = 0
  for fxn,args,var_vals in run.jit_cache:
    assert not var_vals, "symbolic shape is not supported"
    functions[fxn.name] = fxn.prg   # NOTE: this assumes all with the same name are the same
    cargs = []
    for i,arg in enumerate(args):
      key = id(arg)
      if key not in bufs:
        if key in special_names:
          bufs[key] = (special_names[key], arg.size, arg.dtype, key)
        else:
          bufs[key] = (f"scratch_{bufnum}", arg.size, arg.dtype, key)
          bufnum += 1
          if i > 0:
            bufs_to_save[bufs[key][0]] = arg   # if first usage of a buffer is not an output, and it's not a special name

            if key not in buf_offsets:
              buf_offsets[key] = byte_offset
              byte_offset += len(arg._buf) * get_byte(arg.dtype)

      if key in special_names or bufs[key][0] not in bufs_to_save:
        cargs.append(bufs[key][0])
      else:
        cargs.append(
          f"({dtype_to_clang_type(str(bufs[key][2])[7:])}*)(llama->weights + {buf_offsets[key]})"
        )
    statements.append((fxn.name, cargs, fxn.global_size, fxn.local_size))
  return (
    functions,
    statements,
    {name:(size, dtype, key) for (name,size,dtype,key) in bufs.values()}, bufs_to_save
  )

def jit_model(model, *args) -> Tuple[TinyJit,Dict[int,str]]:
  assert hasattr(model, "forward") or callable(model), "model needs a forward function"
  @TinyJit
  def run(*args): return (model.forward(*args) if hasattr(model, "forward") else model(*args)).realize()

  # twice to run the JIT
  for _ in range(2): the_output = run(*args)
  special_names = {}

  # hack to put the inputs back
  for (j,i),idx in run.input_replace.items():
    realized_input = args[idx[0]].lazydata.realized
    run.jit_cache[j][1][i] = realized_input
    special_names[id(realized_input)] = f'input{idx[0]}'

  # TODO: fetch this from the jit in self.input_replace and self.ret (hint: use get_parameters on self.ret)
  special_names[id(the_output.lazydata.realized)] = "outputs"
  return run, special_names

def export_model_clang(
    functions:Dict[str,str],
    statements:Dict[str,Tuple[str,int,int]],
    bufs:Dict[str,Tuple[str,int,int]],
    bufs_to_save:Dict[str,Tensor],
    input_names:List[str]
  ) -> str:
  from tinygrad.runtime.ops_clang import CLANG_PROGRAM_HEADER
  cprog = ['#include "llama2.h"']
  cprog.append(CLANG_PROGRAM_HEADER)

  with open(os.path.join("compiled/weights.bin"), "wb") as fw:
    for _, cl in bufs_to_save.items():
      fw.write(cl._buffer())

  inputs = ", ".join([f'float* {input}' for input in input_names])

  cprog += [
    f"{dtype_to_clang_type(str(dtype)[7:])}* {name};"
    for name,(len,dtype,_key) in bufs.items()
      if name not in ['inputs', 'outputs']
      if name not in input_names
  ]

  cprog += list(functions.values())

  def allocate_buf(name, length, dtype):
    clang_type = dtype_to_clang_type(str(dtype)[7:])
    return f"{name} = ({clang_type}*)malloc({length} * sizeof({clang_type}));"

  cprog += ["void init() {"] + [
    allocate_buf(name, len, dtype)
    for name,(len,dtype,_key) in bufs.items()
      if name not in ['inputs', 'outputs']
      if name not in input_names
  ] + ["}"]

  cprog += ["void deinit() {"] + [
    f"free({name});"
    for name,(len,dtype,_key) in bufs.items()
      if name not in ['inputs', 'outputs']
      if name not in input_names
  ] + ["}"]

  cprog += [f"void net({inputs}, float* outputs, model_t* llama) {{"] + [f"{name}({', '.join(args)});" for (name, args, _global_size, _local_size) in statements] + ["}"]

  return '\n'.join(cprog)

def export_model(model, target:str, *inputs):
  run, special_names = jit_model(model, *inputs)
  functions, statements, bufs, bufs_to_save = compile_net(run, special_names)
  state = get_state_dict(model)
  weight_names = {id(x.lazydata.realized): name for name, x in state.items()}
  input_names = [name for _,name in special_names.items() if "input" in name]
  prg = ""
  if target == "clang":
    prg = export_model_clang(
        functions,
        statements,
        bufs,
        bufs_to_save,
        input_names
      )
  else:
    prg = json.dumps({
      "backend": Device.DEFAULT,
      "inputs": [{
        "size": bufs[name][0],
        "dtype": bufs[name][1].name
      } for name in input_names],
      "output": {
        "size": bufs["outputs"][0],
        "dtype": bufs["outputs"][1].name
      },
      "functions": functions,
      "statements": [{
        "kernel": kernel,
        "args": args,
        "global_size": global_size,
        "local_size": local_size
      } for (kernel, args, global_size, local_size) in statements],
      "buffers": {
        name: {
          "size": size,
          "dtype": dtype.name,
          "id": weight_names[_key] if _key in weight_names else ""
        } for name, (size,dtype,_key) in bufs.items() if name not in ["input", "outputs"]
      }
    })
  return (
    prg,
    {input:bufs[input][0] for input in input_names},
    bufs['outputs'][0],
    state
  )

# WIP: new linear api that allows you to compile kernels without jitting
def no_jit_model(model):
  # a single forward pass will create a cgraph
  result = model(Tensor.randn([1]).realize(), 5)
  # chunk the cgraph
  sched = result.lazydata.schedule()

  while len(sched):
    sched_item = sched.pop(0)
    lin = Linearizer(sched_item.ast)
    lin.hand_coded_optimizations()
    lin.linearize()
    code = renderer(lin.function_name, lin.uops)
    print(code)
