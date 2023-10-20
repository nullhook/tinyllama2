from pathlib import Path
from model.llama2 import Transformer, AbsmaxQuantizedLinear
from tinygrad.tensor import Tensor
from export import export_model
from tinygrad.ops import Device
import os

Device.DEFAULT = "CLANG"
TARGET = "clang"
TOKENIZER_PATH = "/Users/taher/github/llama-2-7b-hf/tokenizer.model"
MODEL_PATH = "/Users/taher/github/llama-2-7b-hf/model.safetensors"

MODEL_PARAMS = {
  "2": {
    "TEST": {
      "args": {"dim": 100, "multiple_of": 10, "n_heads": 10, "n_layers": 10, "norm_eps": 1e-05, "vocab_size": 32000},
    },
    "7B": {
      "args": {"dim": 4096, "multiple_of": 256, "n_heads": 32, "n_layers": 32, "norm_eps": 1e-05, "vocab_size": 32000},
      "files": 1,
    },
    "13B": {
      "args": {"dim": 5120, "multiple_of": 256, "n_heads": 40, "n_layers": 40, "norm_eps": 1e-05, "vocab_size": 32000},
      "files": 2,
    },
  },
}

if __name__ == "__main__":
  model = Transformer(**MODEL_PARAMS["2"]["7B"]["args"],linear=AbsmaxQuantizedLinear)
  model.load_from_pretrained(model_path=MODEL_PATH, quantize=True)

  if not os.path.exists("compiled"):
    os.mkdir("compiled")

  # bos, hello, my name is
  toks = [1, 15043, 29892, 590, 1024, 338]
  start_pos = 0
  prg, inputs, out_size, state = export_model(model,
                                                 TARGET,
                                                 Tensor([toks]),
                                                 start_pos)
  cprog = [prg]

  # inputs = "\n".join([f"float {inp}[{size}];" for inp,size in inputs.items()])
  # cprog.append(inputs)
  # cprog.append(f"float outputs[{out_size}];")
  cheader = ["#include <stdlib.h>"]
  cheader.append("typedef struct { void* weights; } model_t;")
  cheader.append("void net(float* input0, float* outputs, model_t* llama);")
  cheader.append("void init();")
  cheader.append("void deinit();")

  f = open("compiled/llama2.c", "w")
  f.write("\n".join(cprog) + "\n")

  f = open("compiled/llama2.h", "w")
  f.write("\n".join(cheader) + "\n")

  # print('\n'.join(cprog))
