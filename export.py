import os, subprocess, pathlib, ctypes
from typing import Tuple, Dict, List
from tinygrad.helpers import DType, dtypes
from tinygrad.tensor import Device, Tensor
from tinygrad.jit import TinyJit
from tinygrad.nn.state import get_state_dict
from tinygrad.codegen.linearizer import Linearizer
from tinygrad.runtime.ops_clang import renderer
from tinygrad.helpers import getenv
from tqdm import tqdm
import json
import os

clang_type_map = {dtypes.float32: "float", dtypes.float16: "half", dtypes.int8: "int8_t"}
dtype_size = { dtypes.float: 4, dtypes.float16: 2, dtypes.int8: 1 }
def convert_dtype(dt: DType): return clang_type_map[dt] if not None else dt

def save_bufs_to_binary(bufs, filename="weights"):
  with open(os.path.join(f"compiled/{filename}.bin"), "wb") as fw:
    for _, cl in bufs.items():
      fw.write(cl._buffer())

def compile_net(
    run:TinyJit,
    special_names:Dict[int,str],
    target: str
  ) -> Tuple[
    Dict[str,str],
    List[Tuple[str,List[str],List[int]]],
    Dict[str,Tuple[int,DType,int]],
    Dict[str,Tensor],
    Dict
  ]:
  functions, bufs, bufs_to_save, statements, bufnum = {}, {}, {}, [], 0
  buf_offsets = {}
  buf_len_from_offset = {}
  byte_offset = 0
  bufs_used = set()

  for fxn,args,var_vals in run.jit_cache:
    assert not var_vals, "symbolic shape is not supported"
    functions[fxn.name] = fxn.prg
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
            bufs_to_save[bufs[key][0]] = arg
            # save offsets
            if key not in buf_offsets:
              buf_len = arg.size
              buf_offsets[key] = byte_offset
              buf_len_from_offset[byte_offset] = buf_len
              byte_offset += buf_len * dtype_size[arg.dtype]

      if key in special_names or bufs[key][0] not in bufs_to_save:
        cargs.append(bufs[key][0])
      else:
        cargs.append(
          f"({convert_dtype(bufs[key][2])}*)(llama->weights + {buf_offsets[key]})"
        )
    statements.append((fxn.name, cargs, fxn.global_size, fxn.local_size))

    for arg in cargs: bufs_used.add(arg)

  # putting bufs back together
  for (name,size,dtype,key) in bufs.values():
    if name not in bufs_used:
      new_name = name if name.endswith("_discard") else name + "_discard"
      bufs[key] = (new_name, size, dtype, key)

  return (
    functions,
    statements,
    {name:(size, dtype, key) for (name,size,dtype,key) in bufs.values()},
    bufs_to_save,
    buf_len_from_offset
  )

def jit_model(model, *args) -> Tuple[TinyJit,Dict[int,str]]:
  assert hasattr(model, "forward") or callable(model), "model needs a forward function"
  @TinyJit
  def run(*args):
    if hasattr(model, "forward"):
      return (model.forward(*args))
    else:
      return (model(*args)).realize()

  # twice to run the JIT
  for _ in range(2):
    the_output = run(*args)

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

  save_bufs_to_binary(bufs_to_save)

  inputs = ", ".join([f'float* {input}' for input in input_names])

  # declare scratch bufs
  cprog += [
    f"{convert_dtype(dtype)}* {name};"
    for name,(len,dtype,_key) in bufs.items()
      if name not in ['inputs', 'outputs']
      if name not in input_names
      if not name.endswith("_discard")
  ]

  cprog += list(functions.values())

  def allocate_buf(name, length, dtype):
    clang_type = convert_dtype(dtype)
    return f"{name} = ({clang_type}*)malloc({length} * sizeof({clang_type}));"

   # allocate scratch bufs
  cprog += ["void init() {"] + [
    allocate_buf(name, len, dtype)
    for name,(len,dtype,_key) in bufs.items()
      if name not in ['inputs', 'outputs']
      if name not in input_names
      if not name.endswith("_discard")
  ] + ["}"]

  cprog += ["void deinit() {"] + [
    f"free({name});"
    for name,(len,dtype,_key) in bufs.items()
      if name not in ['inputs', 'outputs']
      if name not in input_names
      if not name.endswith("_discard")
  ] + ["}"]

  cprog += [f"void net({inputs}, float* outputs, model_t* llama) {{"] + [f"{name}({', '.join(args)});" for (name, args, _global_size, _local_size) in statements] + ["}"]

  return '\n'.join(cprog)

def export_model_metal(
    functions:Dict[str,str],
    statements:Dict[str,Tuple[str,int,int]],
    bufs:Dict[str,Tuple[str,int,int]],
    bufs_to_save:Dict[str,Tensor],
    input_names:List[str],
    buf_len_from_offset: Dict
  ) -> str:
  kernel_code = '\n'.join(list(functions.values()))
  metal_air = subprocess.check_output(['xcrun', '-sdk', 'macosx', 'metal', '-x', 'metal', '-c', '-', '-o', '-'], input=kernel_code.encode('utf-8'))
  metal_lib = subprocess.check_output(['xcrun', '-sdk', 'macosx', 'metallib', '-', '-o', '-'], input=metal_air)
  with open(os.path.join("default.metallib"), "wb") as fw:
    fw.write(metal_lib)

  save_bufs_to_binary(bufs_to_save, filename="weights_metal")

  metal_prg = []

  metal_prg += [
    f"MTL::Buffer* {name};"
    for name,(len,dtype,_key) in bufs.items()
    if not name.endswith("_discard")
  ]

  fns = set(entry[0] for entry in statements)

  metal_prg += [
    f"MTL::ComputePipelineState* {fn_name}_pso;"
    for fn_name in list(fns)
  ]

  metal_prg += ["void init(MTL::Device* device, MTL::Library* library) {"] + [
    f" {name} = device->newBuffer({len} * sizeof({clang_type_map[dtype]}), MTL::ResourceStorageModeManaged);"
    for name, (len,dtype,key) in bufs.items()
    if not name.endswith("_discard")
  ] + [f' MTL::Function* {fn_name} = library->newFunction(NS::String::string("{fn_name}", NS::StringEncoding::UTF8StringEncoding));\n'
  f" NS::Error* {fn_name}_err = nullptr;"
  f" {fn_name}_pso = device->newComputePipelineState({fn_name}, &{fn_name}_err);\n\n" for fn_name in fns] + ["}"]

  created_buffers = set()
  def set_metal_buffer(i: int, arg: str, fn_name: str):
    if arg.startswith("("):
      s = arg.split('+')[0]
      dtype = arg.split('+')[0][s.find("(")+1:s.find("*)")]
      buf_offset = int(arg.split('+')[-1].replace(')', ''))
      buf_len = buf_len_from_offset[buf_offset]
      weight_name = f"{fn_name}_weights_{buf_offset}"

      if weight_name not in created_buffers:
        created_buffers.add(weight_name)
        return (f" MTL::Buffer* {weight_name} = device->newBuffer({arg}, {buf_len} * sizeof({dtype}), MTL::ResourceStorageModeManaged);\n" +
                f" encoder->setBuffer({weight_name}, 0, {i});\n")
      else:
        return f" encoder->setBuffer({weight_name}, 0, {i});\n"
    return f" encoder->setBuffer({arg}, 0, {i});\n"

  metal_prg += (
    ["void encode(MTL::ComputeCommandEncoder* encoder, MTL::Device* device, model_t* llama) {"] +
    [f" encoder->setComputePipelineState({name}_pso);\n"
    + "".join([set_metal_buffer(i, arg, name) for i,arg in enumerate(args)]) +
    f" encoder->dispatchThreadgroups(MTL::Size({','.join([str(x) for x in _global_size])}), MTL::Size({','.join([str(x) for x in _local_size])}));\n"
    for(name, args, _global_size, _local_size) in statements] +
    [" encoder->endEncoding();"] + ["}"]
  )
  return '\n'.join(metal_prg)

def export_model(model, target:str, *inputs):
  run, special_names = jit_model(model, *inputs)
  functions, statements, bufs, bufs_to_save, buf_len_from_offset = compile_net(run, special_names, target)
  state = get_state_dict(model)
  weight_names = {id(x.lazydata.realized): name for name, x in state.items()}
  input_names = [name for _,name in special_names.items() if "input" in name]
  prg = ""
  if target == "clang":
    prg = export_model_clang(functions, statements, bufs, bufs_to_save, input_names)
  elif target == "metal":
    prg = export_model_metal(functions, statements, bufs, bufs_to_save, input_names, buf_len_from_offset)
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
