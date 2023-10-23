#include <fcntl.h>
#include "sys/mman.h"
#include "sys/stat.h"
#include <assert.h>
#include <time.h>
#include <vector>
#include <iostream>

extern "C" {
  #include "compiled/llama2.h"
}

#define VOCAB_SIZE 32000
#define MAX_GEN_LEN 1024

int random_choice(const std::vector<float>& probs) {
  float r = (float)rand() / (float)RAND_MAX;
  float cumsum2 = 0;
  for (unsigned int i = 0; i < probs.size(); i++) {
    cumsum2 += probs[i];
    if (r < cumsum2) {
      return i;
    }
  }
  return 0;
}

int main(int argc, char* argv[]) {
  srand(time(NULL));
  std::string model_path;

  for (int i=1; i<argc; ++i) {
    std::string arg = argv[i];

    if (arg == "--model-path" && i + 1 < argc) {
      model_path = argv[++i];
    } else {
      std::cerr << "Unknown argument: " << arg << std::endl;
      return 1;
    }
  }

  if (model_path.empty()) {
    std::cerr << "Usage: " << argv[0] << " --model-path <path_to_model>" << std::endl;
    return 1;
  }

  std::cout << "Model path provided: " << model_path << std::endl;

  std::vector<float> input0{1, 15043, 29892, 590, 1024, 338};
  std::vector<float> outputs(VOCAB_SIZE);

  std::cout << "loading weights\n";
  int fd = -1;
  if ((fd = open(model_path.c_str(), O_RDONLY)) == -1) {
    std::cerr << "failed to open\n";
    return EXIT_FAILURE;
  }

  struct stat fesb;
  fstat(fd, &fesb);
  void *weights = mmap(NULL, fesb.st_size, PROT_READ, MAP_SHARED, fd, 0);
  assert(weights != MAP_FAILED);

  model_t *llama = (model_t *)malloc(sizeof(model_t));
  llama->weights = weights;

  std::cout << "weights loaded: " << llama->weights << "\n";
  init();
  std::cout << "allocated scratch bufs\n";

  // run
  int toks_to_gen = 50;
  assert (MAX_GEN_LEN >= toks_to_gen);

  unsigned int i = 0;
  while (1) {
    net(input0.data(), outputs.data(), llama);
    int tok = random_choice(outputs);
    input0.push_back(tok);

    printf("%i,", tok);
    fflush(stdout);

    ++i;
    if (i >= toks_to_gen)
      break;
  }


  // cleanup
  deinit();
  munmap(llama->weights, fesb.st_size);
  free(llama);
}
