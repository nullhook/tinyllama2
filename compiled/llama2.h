#include <stdlib.h>
typedef struct { void* weights; } model_t;
void net(float* input0, float* outputs, model_t* llama);
void init();
void deinit();
