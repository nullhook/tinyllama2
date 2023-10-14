#include <stdio.h>
#include <fcntl.h>
#include "sys/mman.h"
#include "sys/stat.h"
#include <stdlib.h>
#include <assert.h>
#include <err.h>
#include <time.h>

#include "llama2.h"

#define VOCAB_SIZE 32000
#define MAX_GEN_LEN 1024

int random_choice(float* probs) {
  float r = (float)rand() / (float)RAND_MAX;
  float cumsum2 = 0;
  for (unsigned int i = 0; i < VOCAB_SIZE; i++) {
    cumsum2 += probs[i];
    if (r < cumsum2) {
      return i;
    }
  }
  return 0;
}

int main(int argc, char* argv[]) {
  srand(time(NULL));

  float input0[MAX_GEN_LEN] = {1, 15043, 29892, 590, 1024, 338};
  unsigned int input_len = 5;

  float outputs[VOCAB_SIZE];

  fprintf(stdout, "loading weights\n");
  int fd = -1;
  if ((fd = open("weights.bin", O_RDONLY)) == -1)
    err(1, "open");
  struct stat fesb;
  fstat(fd, &fesb);
  void *weights = mmap(NULL, fesb.st_size, PROT_READ, MAP_SHARED, fd, 0);
  assert(weights != MAP_FAILED);

  model_t *llama = (model_t *)malloc(sizeof(model_t));
  llama->weights = weights;

  fprintf(stdout, "weights mmaped: %p\n", llama->weights);
  init();
  fprintf(stdout, "allocated scratch bufs\n");

  // run
  int toks_to_gen = 50;
  assert (MAX_GEN_LEN >= toks_to_gen);

  unsigned int i = 0;
  while (1) {
    net(input0, outputs, llama);
    int tok = random_choice(outputs);
    input0[input_len+1] = tok;

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
