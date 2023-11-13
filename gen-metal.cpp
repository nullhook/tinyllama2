#include <vector>
#include <iostream>
#include "sys/mman.h"
#include "sys/stat.h"

#define NS_PRIVATE_IMPLEMENTATION
#define CA_PRIVATE_IMPLEMENTATION
#define MTL_PRIVATE_IMPLEMENTATION
#include "lib/Metal.hpp"

#define max(x,y) ((x>y)?x:y)
#define int64 long
#define half __fp16
#define uchar unsigned char
#define bool uchar

// using METAL backend
// with export target: metal
// quant enable:  True
typedef struct { void* weights; } model_t;
MTL::Buffer* scratch_0;
MTL::Buffer* scratch_1;
MTL::Buffer* scratch_2;
MTL::Buffer* input0;
MTL::Buffer* scratch_4;
MTL::Buffer* scratch_9;
MTL::Buffer* scratch_10;
MTL::Buffer* scratch_14;
MTL::Buffer* scratch_19;
MTL::Buffer* scratch_20;
MTL::Buffer* scratch_31;
MTL::Buffer* scratch_34;
MTL::Buffer* scratch_49;
MTL::Buffer* scratch_52;
MTL::Buffer* scratch_67;
MTL::Buffer* scratch_70;
MTL::Buffer* scratch_85;
MTL::Buffer* scratch_88;
MTL::Buffer* scratch_103;
MTL::Buffer* scratch_106;
MTL::Buffer* scratch_121;
MTL::Buffer* scratch_124;
MTL::Buffer* scratch_139;
MTL::Buffer* scratch_142;
MTL::Buffer* scratch_157;
MTL::Buffer* scratch_160;
MTL::Buffer* scratch_175;
MTL::Buffer* scratch_178;
MTL::Buffer* scratch_193;
MTL::Buffer* scratch_196;
MTL::Buffer* scratch_211;
MTL::Buffer* scratch_214;
MTL::Buffer* scratch_229;
MTL::Buffer* scratch_232;
MTL::Buffer* scratch_247;
MTL::Buffer* scratch_250;
MTL::Buffer* scratch_265;
MTL::Buffer* scratch_268;
MTL::Buffer* scratch_283;
MTL::Buffer* scratch_286;
MTL::Buffer* scratch_301;
MTL::Buffer* scratch_304;
MTL::Buffer* scratch_319;
MTL::Buffer* scratch_322;
MTL::Buffer* scratch_337;
MTL::Buffer* scratch_340;
MTL::Buffer* scratch_355;
MTL::Buffer* scratch_358;
MTL::Buffer* scratch_373;
MTL::Buffer* scratch_376;
MTL::Buffer* scratch_391;
MTL::Buffer* scratch_394;
MTL::Buffer* scratch_409;
MTL::Buffer* scratch_412;
MTL::Buffer* scratch_427;
MTL::Buffer* scratch_430;
MTL::Buffer* scratch_445;
MTL::Buffer* scratch_448;
MTL::Buffer* scratch_463;
MTL::Buffer* scratch_466;
MTL::Buffer* scratch_481;
MTL::Buffer* scratch_484;
MTL::Buffer* scratch_499;
MTL::Buffer* scratch_502;
MTL::Buffer* scratch_517;
MTL::Buffer* scratch_520;
MTL::Buffer* scratch_535;
MTL::Buffer* scratch_538;
MTL::Buffer* scratch_553;
MTL::Buffer* scratch_556;
MTL::Buffer* scratch_571;
MTL::Buffer* scratch_574;
MTL::Buffer* outputs;
MTL::ComputePipelineState* r_6_32_6_pso;
MTL::ComputePipelineState* r_8_2_4_2_16_6_4_3_pso;
MTL::ComputePipelineState* E_500_2_16_4_3_pso;
MTL::ComputePipelineState* r_64_2_16_1024_4_4_3n1_pso;
MTL::ComputePipelineState* r_6_6n1_pso;
MTL::ComputePipelineState* E_32_2752_32_4_4_pso;
MTL::ComputePipelineState* r_2_2_8_3_3_32_4_4_pso;
MTL::ComputePipelineState* E_32_8000_32_4_4_pso;
MTL::ComputePipelineState* r_172_2_16_1024_4_4_3n1_pso;
MTL::ComputePipelineState* r_6_32_6n1_pso;
MTL::ComputePipelineState* r_256_125n1_pso;
MTL::ComputePipelineState* E_2_2_3_3_pso;
MTL::ComputePipelineState* E_250_32_4n1_pso;
MTL::ComputePipelineState* E_32_1024_32_4_4_pso;
MTL::ComputePipelineState* r_64_2_16_8000_4_4_3_pso;
MTL::ComputePipelineState* E_64_2_16_4_3n1_pso;
MTL::ComputePipelineState* r_6_256_16n1_pso;
MTL::ComputePipelineState* r_500_2_16_1024_4_4_3_pso;
MTL::ComputePipelineState* E_6_32_2_3_pso;
MTL::ComputePipelineState* E_6_4_8_16_2_4_pso;
MTL::ComputePipelineState* r_6_256_16_pso;
MTL::ComputePipelineState* r_64_2_16_2752_4_4_3_pso;
MTL::ComputePipelineState* E_250_32_4_pso;
MTL::ComputePipelineState* E_6_32_2_3n1_pso;
MTL::ComputePipelineState* E_64_2_16_4_3_pso;
MTL::ComputePipelineState* E_86_1024_32_4_4_pso;
MTL::ComputePipelineState* r_64_2_16_1024_4_4_3_pso;
MTL::ComputePipelineState* r_256_125_pso;
MTL::ComputePipelineState* r_172_2_16_1024_4_4_3_pso;
MTL::ComputePipelineState* r_6_6_pso;
void init(MTL::Device* device, MTL::Library* library) {
 scratch_0 = device->newBuffer(131072000 * sizeof(half), MTL::ResourceStorageModeManaged);
 scratch_1 = device->newBuffer(45088768 * sizeof(half), MTL::ResourceStorageModeManaged);
 scratch_2 = device->newBuffer(36 * sizeof(float), MTL::ResourceStorageModeManaged);
 input0 = device->newBuffer(6 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_4 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_9 = device->newBuffer(66048 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_10 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_14 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_19 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_20 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_31 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_34 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_49 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_52 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_67 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_70 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_85 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_88 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_103 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_106 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_121 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_124 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_139 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_142 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_157 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_160 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_175 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_178 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_193 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_196 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_211 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_214 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_229 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_232 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_247 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_250 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_265 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_268 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_283 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_286 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_301 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_304 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_319 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_322 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_337 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_340 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_355 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_358 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_373 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_376 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_391 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_394 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_409 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_412 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_427 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_430 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_445 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_448 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_463 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_466 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_481 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_484 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_499 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_502 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_517 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_520 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_535 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_538 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_553 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_556 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_571 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_574 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 outputs = device->newBuffer(32000 * sizeof(float), MTL::ResourceStorageModeManaged);
 MTL::Function* r_6_32_6 = library->newFunction(NS::String::string("r_6_32_6", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_6_32_6_err = nullptr; r_6_32_6_pso = device->newComputePipelineState(r_6_32_6, &r_6_32_6_err);


 MTL::Function* r_8_2_4_2_16_6_4_3 = library->newFunction(NS::String::string("r_8_2_4_2_16_6_4_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_8_2_4_2_16_6_4_3_err = nullptr; r_8_2_4_2_16_6_4_3_pso = device->newComputePipelineState(r_8_2_4_2_16_6_4_3, &r_8_2_4_2_16_6_4_3_err);


 MTL::Function* E_500_2_16_4_3 = library->newFunction(NS::String::string("E_500_2_16_4_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_500_2_16_4_3_err = nullptr; E_500_2_16_4_3_pso = device->newComputePipelineState(E_500_2_16_4_3, &E_500_2_16_4_3_err);


 MTL::Function* r_64_2_16_1024_4_4_3n1 = library->newFunction(NS::String::string("r_64_2_16_1024_4_4_3n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_64_2_16_1024_4_4_3n1_err = nullptr; r_64_2_16_1024_4_4_3n1_pso = device->newComputePipelineState(r_64_2_16_1024_4_4_3n1, &r_64_2_16_1024_4_4_3n1_err);


 MTL::Function* r_6_6n1 = library->newFunction(NS::String::string("r_6_6n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_6_6n1_err = nullptr; r_6_6n1_pso = device->newComputePipelineState(r_6_6n1, &r_6_6n1_err);


 MTL::Function* E_32_2752_32_4_4 = library->newFunction(NS::String::string("E_32_2752_32_4_4", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_32_2752_32_4_4_err = nullptr; E_32_2752_32_4_4_pso = device->newComputePipelineState(E_32_2752_32_4_4, &E_32_2752_32_4_4_err);


 MTL::Function* r_2_2_8_3_3_32_4_4 = library->newFunction(NS::String::string("r_2_2_8_3_3_32_4_4", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_2_2_8_3_3_32_4_4_err = nullptr; r_2_2_8_3_3_32_4_4_pso = device->newComputePipelineState(r_2_2_8_3_3_32_4_4, &r_2_2_8_3_3_32_4_4_err);


 MTL::Function* E_32_8000_32_4_4 = library->newFunction(NS::String::string("E_32_8000_32_4_4", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_32_8000_32_4_4_err = nullptr; E_32_8000_32_4_4_pso = device->newComputePipelineState(E_32_8000_32_4_4, &E_32_8000_32_4_4_err);


 MTL::Function* r_172_2_16_1024_4_4_3n1 = library->newFunction(NS::String::string("r_172_2_16_1024_4_4_3n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_172_2_16_1024_4_4_3n1_err = nullptr; r_172_2_16_1024_4_4_3n1_pso = device->newComputePipelineState(r_172_2_16_1024_4_4_3n1, &r_172_2_16_1024_4_4_3n1_err);


 MTL::Function* r_6_32_6n1 = library->newFunction(NS::String::string("r_6_32_6n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_6_32_6n1_err = nullptr; r_6_32_6n1_pso = device->newComputePipelineState(r_6_32_6n1, &r_6_32_6n1_err);


 MTL::Function* r_256_125n1 = library->newFunction(NS::String::string("r_256_125n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_256_125n1_err = nullptr; r_256_125n1_pso = device->newComputePipelineState(r_256_125n1, &r_256_125n1_err);


 MTL::Function* E_2_2_3_3 = library->newFunction(NS::String::string("E_2_2_3_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_2_2_3_3_err = nullptr; E_2_2_3_3_pso = device->newComputePipelineState(E_2_2_3_3, &E_2_2_3_3_err);


 MTL::Function* E_250_32_4n1 = library->newFunction(NS::String::string("E_250_32_4n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_250_32_4n1_err = nullptr; E_250_32_4n1_pso = device->newComputePipelineState(E_250_32_4n1, &E_250_32_4n1_err);


 MTL::Function* E_32_1024_32_4_4 = library->newFunction(NS::String::string("E_32_1024_32_4_4", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_32_1024_32_4_4_err = nullptr; E_32_1024_32_4_4_pso = device->newComputePipelineState(E_32_1024_32_4_4, &E_32_1024_32_4_4_err);


 MTL::Function* r_64_2_16_8000_4_4_3 = library->newFunction(NS::String::string("r_64_2_16_8000_4_4_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_64_2_16_8000_4_4_3_err = nullptr; r_64_2_16_8000_4_4_3_pso = device->newComputePipelineState(r_64_2_16_8000_4_4_3, &r_64_2_16_8000_4_4_3_err);


 MTL::Function* E_64_2_16_4_3n1 = library->newFunction(NS::String::string("E_64_2_16_4_3n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_64_2_16_4_3n1_err = nullptr; E_64_2_16_4_3n1_pso = device->newComputePipelineState(E_64_2_16_4_3n1, &E_64_2_16_4_3n1_err);


 MTL::Function* r_6_256_16n1 = library->newFunction(NS::String::string("r_6_256_16n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_6_256_16n1_err = nullptr; r_6_256_16n1_pso = device->newComputePipelineState(r_6_256_16n1, &r_6_256_16n1_err);


 MTL::Function* r_500_2_16_1024_4_4_3 = library->newFunction(NS::String::string("r_500_2_16_1024_4_4_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_500_2_16_1024_4_4_3_err = nullptr; r_500_2_16_1024_4_4_3_pso = device->newComputePipelineState(r_500_2_16_1024_4_4_3, &r_500_2_16_1024_4_4_3_err);


 MTL::Function* E_6_32_2_3 = library->newFunction(NS::String::string("E_6_32_2_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_6_32_2_3_err = nullptr; E_6_32_2_3_pso = device->newComputePipelineState(E_6_32_2_3, &E_6_32_2_3_err);


 MTL::Function* E_6_4_8_16_2_4 = library->newFunction(NS::String::string("E_6_4_8_16_2_4", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_6_4_8_16_2_4_err = nullptr; E_6_4_8_16_2_4_pso = device->newComputePipelineState(E_6_4_8_16_2_4, &E_6_4_8_16_2_4_err);


 MTL::Function* r_6_256_16 = library->newFunction(NS::String::string("r_6_256_16", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_6_256_16_err = nullptr; r_6_256_16_pso = device->newComputePipelineState(r_6_256_16, &r_6_256_16_err);


 MTL::Function* r_64_2_16_2752_4_4_3 = library->newFunction(NS::String::string("r_64_2_16_2752_4_4_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_64_2_16_2752_4_4_3_err = nullptr; r_64_2_16_2752_4_4_3_pso = device->newComputePipelineState(r_64_2_16_2752_4_4_3, &r_64_2_16_2752_4_4_3_err);


 MTL::Function* E_250_32_4 = library->newFunction(NS::String::string("E_250_32_4", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_250_32_4_err = nullptr; E_250_32_4_pso = device->newComputePipelineState(E_250_32_4, &E_250_32_4_err);


 MTL::Function* E_6_32_2_3n1 = library->newFunction(NS::String::string("E_6_32_2_3n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_6_32_2_3n1_err = nullptr; E_6_32_2_3n1_pso = device->newComputePipelineState(E_6_32_2_3n1, &E_6_32_2_3n1_err);


 MTL::Function* E_64_2_16_4_3 = library->newFunction(NS::String::string("E_64_2_16_4_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_64_2_16_4_3_err = nullptr; E_64_2_16_4_3_pso = device->newComputePipelineState(E_64_2_16_4_3, &E_64_2_16_4_3_err);


 MTL::Function* E_86_1024_32_4_4 = library->newFunction(NS::String::string("E_86_1024_32_4_4", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_86_1024_32_4_4_err = nullptr; E_86_1024_32_4_4_pso = device->newComputePipelineState(E_86_1024_32_4_4, &E_86_1024_32_4_4_err);


 MTL::Function* r_64_2_16_1024_4_4_3 = library->newFunction(NS::String::string("r_64_2_16_1024_4_4_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_64_2_16_1024_4_4_3_err = nullptr; r_64_2_16_1024_4_4_3_pso = device->newComputePipelineState(r_64_2_16_1024_4_4_3, &r_64_2_16_1024_4_4_3_err);


 MTL::Function* r_256_125 = library->newFunction(NS::String::string("r_256_125", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_256_125_err = nullptr; r_256_125_pso = device->newComputePipelineState(r_256_125, &r_256_125_err);


 MTL::Function* r_172_2_16_1024_4_4_3 = library->newFunction(NS::String::string("r_172_2_16_1024_4_4_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_172_2_16_1024_4_4_3_err = nullptr; r_172_2_16_1024_4_4_3_pso = device->newComputePipelineState(r_172_2_16_1024_4_4_3, &r_172_2_16_1024_4_4_3_err);


 MTL::Function* r_6_6 = library->newFunction(NS::String::string("r_6_6", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_6_6_err = nullptr; r_6_6_pso = device->newComputePipelineState(r_6_6, &r_6_6_err);


}
void encode(MTL::ComputeCommandEncoder* encoder, MTL::Device* device, model_t* llama) {
 encoder->setComputePipelineState(r_6_6_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(1,1,1), MTL::Size(1,1,1));

 encoder->setComputePipelineState(r_6_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(1,1,1), MTL::Size(1,1,1));

 encoder->setComputePipelineState(E_2_2_3_3_pso);
 encoder->setBuffer(scratch_2, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,1));

 encoder->setComputePipelineState(E_500_2_16_4_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_500_2_16_4_3_weights_0 = device->newBuffer((float*)((char*)llama->weights + 0), 32000 * sizeof(float), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_500_2_16_4_3_weights_0, 0, 1);
 encoder->setBuffer(input0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(500,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_64_2_16_8000_4_4_3_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 MTL::Buffer* r_64_2_16_8000_4_4_3_weights_128000 = device->newBuffer((half*)((char*)llama->weights + 128000), 131072000 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(r_64_2_16_8000_4_4_3_weights_128000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_4, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_4, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_262272000 = device->newBuffer((half*)((char*)llama->weights + 262272000), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_262272000, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_262280192 = device->newBuffer((char*)((char*)llama->weights + 262280192), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_262280192, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_279057408 = device->newBuffer((half*)((char*)llama->weights + 279057408), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_279057408, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 MTL::Buffer* E_6_4_8_16_2_4_weights_279065600 = device->newBuffer((float*)((char*)llama->weights + 279065600), 262144 * sizeof(float), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_280114176 = device->newBuffer((char*)((char*)llama->weights + 280114176), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_280114176, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_296891392 = device->newBuffer((half*)((char*)llama->weights + 296891392), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_296891392, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_14, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_296899584 = device->newBuffer((char*)((char*)llama->weights + 296899584), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_296899584, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_313676800 = device->newBuffer((half*)((char*)llama->weights + 313676800), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_313676800, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_10, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_14, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_313684992 = device->newBuffer((char*)((char*)llama->weights + 313684992), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_313684992, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_330462208 = device->newBuffer((half*)((char*)llama->weights + 330462208), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_330462208, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_4, 0, 1);
 encoder->setBuffer(scratch_19, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_4, 0, 1);
 encoder->setBuffer(scratch_19, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_330470400 = device->newBuffer((half*)((char*)llama->weights + 330470400), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_330470400, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_330478592 = device->newBuffer((char*)((char*)llama->weights + 330478592), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_330478592, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_375567360 = device->newBuffer((half*)((char*)llama->weights + 375567360), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_375567360, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_375589376 = device->newBuffer((char*)((char*)llama->weights + 375589376), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_375589376, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_420678144 = device->newBuffer((half*)((char*)llama->weights + 420678144), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_420678144, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_420700160 = device->newBuffer((char*)((char*)llama->weights + 420700160), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_420700160, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_465788928 = device->newBuffer((half*)((char*)llama->weights + 465788928), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_465788928, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_4, 0, 1);
 encoder->setBuffer(scratch_19, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_465797120 = device->newBuffer((half*)((char*)llama->weights + 465797120), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_465797120, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_465805312 = device->newBuffer((char*)((char*)llama->weights + 465805312), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_465805312, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_482582528 = device->newBuffer((half*)((char*)llama->weights + 482582528), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_482582528, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_31, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_482590720 = device->newBuffer((char*)((char*)llama->weights + 482590720), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_482590720, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_499367936 = device->newBuffer((half*)((char*)llama->weights + 499367936), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_499367936, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_34, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_499376128 = device->newBuffer((char*)((char*)llama->weights + 499376128), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_499376128, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_516153344 = device->newBuffer((half*)((char*)llama->weights + 516153344), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_516153344, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_31, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_34, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_516161536 = device->newBuffer((char*)((char*)llama->weights + 516161536), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_516161536, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_532938752 = device->newBuffer((half*)((char*)llama->weights + 532938752), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_532938752, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_532946944 = device->newBuffer((half*)((char*)llama->weights + 532946944), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_532946944, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_532955136 = device->newBuffer((char*)((char*)llama->weights + 532955136), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_532955136, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_578043904 = device->newBuffer((half*)((char*)llama->weights + 578043904), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_578043904, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_578065920 = device->newBuffer((char*)((char*)llama->weights + 578065920), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_578065920, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_623154688 = device->newBuffer((half*)((char*)llama->weights + 623154688), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_623154688, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_623176704 = device->newBuffer((char*)((char*)llama->weights + 623176704), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_623176704, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_668265472 = device->newBuffer((half*)((char*)llama->weights + 668265472), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_668265472, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_668273664 = device->newBuffer((half*)((char*)llama->weights + 668273664), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_668273664, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_668281856 = device->newBuffer((char*)((char*)llama->weights + 668281856), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_668281856, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_685059072 = device->newBuffer((half*)((char*)llama->weights + 685059072), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_685059072, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_49, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_685067264 = device->newBuffer((char*)((char*)llama->weights + 685067264), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_685067264, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_701844480 = device->newBuffer((half*)((char*)llama->weights + 701844480), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_701844480, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_52, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_701852672 = device->newBuffer((char*)((char*)llama->weights + 701852672), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_701852672, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_718629888 = device->newBuffer((half*)((char*)llama->weights + 718629888), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_718629888, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_49, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_52, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_718638080 = device->newBuffer((char*)((char*)llama->weights + 718638080), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_718638080, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_735415296 = device->newBuffer((half*)((char*)llama->weights + 735415296), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_735415296, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_735423488 = device->newBuffer((half*)((char*)llama->weights + 735423488), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_735423488, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_735431680 = device->newBuffer((char*)((char*)llama->weights + 735431680), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_735431680, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_780520448 = device->newBuffer((half*)((char*)llama->weights + 780520448), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_780520448, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_780542464 = device->newBuffer((char*)((char*)llama->weights + 780542464), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_780542464, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_825631232 = device->newBuffer((half*)((char*)llama->weights + 825631232), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_825631232, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_825653248 = device->newBuffer((char*)((char*)llama->weights + 825653248), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_825653248, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_870742016 = device->newBuffer((half*)((char*)llama->weights + 870742016), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_870742016, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_870750208 = device->newBuffer((half*)((char*)llama->weights + 870750208), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_870750208, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_870758400 = device->newBuffer((char*)((char*)llama->weights + 870758400), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_870758400, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_887535616 = device->newBuffer((half*)((char*)llama->weights + 887535616), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_887535616, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_67, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_887543808 = device->newBuffer((char*)((char*)llama->weights + 887543808), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_887543808, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_904321024 = device->newBuffer((half*)((char*)llama->weights + 904321024), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_904321024, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_70, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_904329216 = device->newBuffer((char*)((char*)llama->weights + 904329216), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_904329216, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_921106432 = device->newBuffer((half*)((char*)llama->weights + 921106432), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_921106432, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_67, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_70, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_921114624 = device->newBuffer((char*)((char*)llama->weights + 921114624), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_921114624, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_937891840 = device->newBuffer((half*)((char*)llama->weights + 937891840), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_937891840, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_937900032 = device->newBuffer((half*)((char*)llama->weights + 937900032), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_937900032, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_937908224 = device->newBuffer((char*)((char*)llama->weights + 937908224), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_937908224, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_982996992 = device->newBuffer((half*)((char*)llama->weights + 982996992), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_982996992, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_983019008 = device->newBuffer((char*)((char*)llama->weights + 983019008), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_983019008, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_1028107776 = device->newBuffer((half*)((char*)llama->weights + 1028107776), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1028107776, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_1028129792 = device->newBuffer((char*)((char*)llama->weights + 1028129792), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_1028129792, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_1073218560 = device->newBuffer((half*)((char*)llama->weights + 1073218560), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_1073218560, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_1073226752 = device->newBuffer((half*)((char*)llama->weights + 1073226752), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_1073226752, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1073234944 = device->newBuffer((char*)((char*)llama->weights + 1073234944), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1073234944, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1090012160 = device->newBuffer((half*)((char*)llama->weights + 1090012160), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1090012160, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_85, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1090020352 = device->newBuffer((char*)((char*)llama->weights + 1090020352), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1090020352, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1106797568 = device->newBuffer((half*)((char*)llama->weights + 1106797568), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1106797568, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_88, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1106805760 = device->newBuffer((char*)((char*)llama->weights + 1106805760), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1106805760, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1123582976 = device->newBuffer((half*)((char*)llama->weights + 1123582976), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1123582976, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_85, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_88, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1123591168 = device->newBuffer((char*)((char*)llama->weights + 1123591168), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1123591168, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1140368384 = device->newBuffer((half*)((char*)llama->weights + 1140368384), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1140368384, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_1140376576 = device->newBuffer((half*)((char*)llama->weights + 1140376576), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_1140376576, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_1140384768 = device->newBuffer((char*)((char*)llama->weights + 1140384768), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1140384768, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_1185473536 = device->newBuffer((half*)((char*)llama->weights + 1185473536), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1185473536, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_1185495552 = device->newBuffer((char*)((char*)llama->weights + 1185495552), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1185495552, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_1230584320 = device->newBuffer((half*)((char*)llama->weights + 1230584320), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1230584320, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_1230606336 = device->newBuffer((char*)((char*)llama->weights + 1230606336), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_1230606336, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_1275695104 = device->newBuffer((half*)((char*)llama->weights + 1275695104), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_1275695104, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_1275703296 = device->newBuffer((half*)((char*)llama->weights + 1275703296), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_1275703296, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1275711488 = device->newBuffer((char*)((char*)llama->weights + 1275711488), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1275711488, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1292488704 = device->newBuffer((half*)((char*)llama->weights + 1292488704), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1292488704, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_103, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1292496896 = device->newBuffer((char*)((char*)llama->weights + 1292496896), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1292496896, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1309274112 = device->newBuffer((half*)((char*)llama->weights + 1309274112), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1309274112, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_106, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1309282304 = device->newBuffer((char*)((char*)llama->weights + 1309282304), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1309282304, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1326059520 = device->newBuffer((half*)((char*)llama->weights + 1326059520), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1326059520, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_103, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_106, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1326067712 = device->newBuffer((char*)((char*)llama->weights + 1326067712), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1326067712, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1342844928 = device->newBuffer((half*)((char*)llama->weights + 1342844928), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1342844928, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_1342853120 = device->newBuffer((half*)((char*)llama->weights + 1342853120), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_1342853120, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_1342861312 = device->newBuffer((char*)((char*)llama->weights + 1342861312), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1342861312, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_1387950080 = device->newBuffer((half*)((char*)llama->weights + 1387950080), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1387950080, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_1387972096 = device->newBuffer((char*)((char*)llama->weights + 1387972096), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1387972096, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_1433060864 = device->newBuffer((half*)((char*)llama->weights + 1433060864), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1433060864, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_1433082880 = device->newBuffer((char*)((char*)llama->weights + 1433082880), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_1433082880, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_1478171648 = device->newBuffer((half*)((char*)llama->weights + 1478171648), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_1478171648, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_1478179840 = device->newBuffer((half*)((char*)llama->weights + 1478179840), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_1478179840, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1478188032 = device->newBuffer((char*)((char*)llama->weights + 1478188032), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1478188032, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1494965248 = device->newBuffer((half*)((char*)llama->weights + 1494965248), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1494965248, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_121, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1494973440 = device->newBuffer((char*)((char*)llama->weights + 1494973440), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1494973440, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1511750656 = device->newBuffer((half*)((char*)llama->weights + 1511750656), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1511750656, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_124, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1511758848 = device->newBuffer((char*)((char*)llama->weights + 1511758848), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1511758848, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1528536064 = device->newBuffer((half*)((char*)llama->weights + 1528536064), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1528536064, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_121, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_124, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1528544256 = device->newBuffer((char*)((char*)llama->weights + 1528544256), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1528544256, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1545321472 = device->newBuffer((half*)((char*)llama->weights + 1545321472), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1545321472, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_1545329664 = device->newBuffer((half*)((char*)llama->weights + 1545329664), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_1545329664, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_1545337856 = device->newBuffer((char*)((char*)llama->weights + 1545337856), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1545337856, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_1590426624 = device->newBuffer((half*)((char*)llama->weights + 1590426624), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1590426624, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_1590448640 = device->newBuffer((char*)((char*)llama->weights + 1590448640), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1590448640, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_1635537408 = device->newBuffer((half*)((char*)llama->weights + 1635537408), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1635537408, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_1635559424 = device->newBuffer((char*)((char*)llama->weights + 1635559424), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_1635559424, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_1680648192 = device->newBuffer((half*)((char*)llama->weights + 1680648192), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_1680648192, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_1680656384 = device->newBuffer((half*)((char*)llama->weights + 1680656384), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_1680656384, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1680664576 = device->newBuffer((char*)((char*)llama->weights + 1680664576), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1680664576, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1697441792 = device->newBuffer((half*)((char*)llama->weights + 1697441792), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1697441792, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_139, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1697449984 = device->newBuffer((char*)((char*)llama->weights + 1697449984), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1697449984, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1714227200 = device->newBuffer((half*)((char*)llama->weights + 1714227200), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1714227200, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_142, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1714235392 = device->newBuffer((char*)((char*)llama->weights + 1714235392), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1714235392, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1731012608 = device->newBuffer((half*)((char*)llama->weights + 1731012608), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1731012608, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_139, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_142, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1731020800 = device->newBuffer((char*)((char*)llama->weights + 1731020800), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1731020800, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1747798016 = device->newBuffer((half*)((char*)llama->weights + 1747798016), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1747798016, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_1747806208 = device->newBuffer((half*)((char*)llama->weights + 1747806208), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_1747806208, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_1747814400 = device->newBuffer((char*)((char*)llama->weights + 1747814400), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1747814400, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_1792903168 = device->newBuffer((half*)((char*)llama->weights + 1792903168), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1792903168, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_1792925184 = device->newBuffer((char*)((char*)llama->weights + 1792925184), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1792925184, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_1838013952 = device->newBuffer((half*)((char*)llama->weights + 1838013952), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1838013952, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_1838035968 = device->newBuffer((char*)((char*)llama->weights + 1838035968), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_1838035968, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_1883124736 = device->newBuffer((half*)((char*)llama->weights + 1883124736), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_1883124736, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_1883132928 = device->newBuffer((half*)((char*)llama->weights + 1883132928), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_1883132928, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1883141120 = device->newBuffer((char*)((char*)llama->weights + 1883141120), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1883141120, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1899918336 = device->newBuffer((half*)((char*)llama->weights + 1899918336), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1899918336, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_157, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1899926528 = device->newBuffer((char*)((char*)llama->weights + 1899926528), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1899926528, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1916703744 = device->newBuffer((half*)((char*)llama->weights + 1916703744), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1916703744, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_160, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1916711936 = device->newBuffer((char*)((char*)llama->weights + 1916711936), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1916711936, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1933489152 = device->newBuffer((half*)((char*)llama->weights + 1933489152), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1933489152, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_157, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_160, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_1933497344 = device->newBuffer((char*)((char*)llama->weights + 1933497344), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1933497344, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_1950274560 = device->newBuffer((half*)((char*)llama->weights + 1950274560), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_1950274560, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_1950282752 = device->newBuffer((half*)((char*)llama->weights + 1950282752), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_1950282752, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_1950290944 = device->newBuffer((char*)((char*)llama->weights + 1950290944), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1950290944, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_1995379712 = device->newBuffer((half*)((char*)llama->weights + 1995379712), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1995379712, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_1995401728 = device->newBuffer((char*)((char*)llama->weights + 1995401728), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_1995401728, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_2040490496 = device->newBuffer((half*)((char*)llama->weights + 2040490496), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_2040490496, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_2040512512 = device->newBuffer((char*)((char*)llama->weights + 2040512512), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_2040512512, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_2085601280 = device->newBuffer((half*)((char*)llama->weights + 2085601280), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_2085601280, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_2085609472 = device->newBuffer((half*)((char*)llama->weights + 2085609472), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_2085609472, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2085617664 = device->newBuffer((char*)((char*)llama->weights + 2085617664), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2085617664, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2102394880 = device->newBuffer((half*)((char*)llama->weights + 2102394880), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2102394880, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_175, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2102403072 = device->newBuffer((char*)((char*)llama->weights + 2102403072), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2102403072, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2119180288 = device->newBuffer((half*)((char*)llama->weights + 2119180288), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2119180288, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_178, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2119188480 = device->newBuffer((char*)((char*)llama->weights + 2119188480), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2119188480, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2135965696 = device->newBuffer((half*)((char*)llama->weights + 2135965696), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2135965696, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_175, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_178, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2135973888 = device->newBuffer((char*)((char*)llama->weights + 2135973888), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2135973888, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2152751104 = device->newBuffer((half*)((char*)llama->weights + 2152751104), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2152751104, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_2152759296 = device->newBuffer((half*)((char*)llama->weights + 2152759296), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_2152759296, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_2152767488 = device->newBuffer((char*)((char*)llama->weights + 2152767488), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_2152767488, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_2197856256 = device->newBuffer((half*)((char*)llama->weights + 2197856256), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_2197856256, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_2197878272 = device->newBuffer((char*)((char*)llama->weights + 2197878272), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_2197878272, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_2242967040 = device->newBuffer((half*)((char*)llama->weights + 2242967040), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_2242967040, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_2242989056 = device->newBuffer((char*)((char*)llama->weights + 2242989056), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_2242989056, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_2288077824 = device->newBuffer((half*)((char*)llama->weights + 2288077824), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_2288077824, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_2288086016 = device->newBuffer((half*)((char*)llama->weights + 2288086016), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_2288086016, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2288094208 = device->newBuffer((char*)((char*)llama->weights + 2288094208), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2288094208, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2304871424 = device->newBuffer((half*)((char*)llama->weights + 2304871424), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2304871424, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_193, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2304879616 = device->newBuffer((char*)((char*)llama->weights + 2304879616), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2304879616, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2321656832 = device->newBuffer((half*)((char*)llama->weights + 2321656832), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2321656832, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_196, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2321665024 = device->newBuffer((char*)((char*)llama->weights + 2321665024), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2321665024, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2338442240 = device->newBuffer((half*)((char*)llama->weights + 2338442240), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2338442240, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_193, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_196, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2338450432 = device->newBuffer((char*)((char*)llama->weights + 2338450432), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2338450432, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2355227648 = device->newBuffer((half*)((char*)llama->weights + 2355227648), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2355227648, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_2355235840 = device->newBuffer((half*)((char*)llama->weights + 2355235840), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_2355235840, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_2355244032 = device->newBuffer((char*)((char*)llama->weights + 2355244032), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_2355244032, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_2400332800 = device->newBuffer((half*)((char*)llama->weights + 2400332800), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_2400332800, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_2400354816 = device->newBuffer((char*)((char*)llama->weights + 2400354816), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_2400354816, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_2445443584 = device->newBuffer((half*)((char*)llama->weights + 2445443584), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_2445443584, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_2445465600 = device->newBuffer((char*)((char*)llama->weights + 2445465600), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_2445465600, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_2490554368 = device->newBuffer((half*)((char*)llama->weights + 2490554368), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_2490554368, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_2490562560 = device->newBuffer((half*)((char*)llama->weights + 2490562560), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_2490562560, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2490570752 = device->newBuffer((char*)((char*)llama->weights + 2490570752), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2490570752, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2507347968 = device->newBuffer((half*)((char*)llama->weights + 2507347968), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2507347968, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_211, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2507356160 = device->newBuffer((char*)((char*)llama->weights + 2507356160), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2507356160, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2524133376 = device->newBuffer((half*)((char*)llama->weights + 2524133376), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2524133376, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_214, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2524141568 = device->newBuffer((char*)((char*)llama->weights + 2524141568), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2524141568, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2540918784 = device->newBuffer((half*)((char*)llama->weights + 2540918784), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2540918784, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_211, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_214, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2540926976 = device->newBuffer((char*)((char*)llama->weights + 2540926976), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2540926976, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2557704192 = device->newBuffer((half*)((char*)llama->weights + 2557704192), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2557704192, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_2557712384 = device->newBuffer((half*)((char*)llama->weights + 2557712384), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_2557712384, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_2557720576 = device->newBuffer((char*)((char*)llama->weights + 2557720576), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_2557720576, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_2602809344 = device->newBuffer((half*)((char*)llama->weights + 2602809344), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_2602809344, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_2602831360 = device->newBuffer((char*)((char*)llama->weights + 2602831360), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_2602831360, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_2647920128 = device->newBuffer((half*)((char*)llama->weights + 2647920128), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_2647920128, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_2647942144 = device->newBuffer((char*)((char*)llama->weights + 2647942144), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_2647942144, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_2693030912 = device->newBuffer((half*)((char*)llama->weights + 2693030912), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_2693030912, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_2693039104 = device->newBuffer((half*)((char*)llama->weights + 2693039104), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_2693039104, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2693047296 = device->newBuffer((char*)((char*)llama->weights + 2693047296), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2693047296, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2709824512 = device->newBuffer((half*)((char*)llama->weights + 2709824512), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2709824512, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_229, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2709832704 = device->newBuffer((char*)((char*)llama->weights + 2709832704), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2709832704, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2726609920 = device->newBuffer((half*)((char*)llama->weights + 2726609920), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2726609920, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_232, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2726618112 = device->newBuffer((char*)((char*)llama->weights + 2726618112), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2726618112, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2743395328 = device->newBuffer((half*)((char*)llama->weights + 2743395328), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2743395328, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_229, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_232, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2743403520 = device->newBuffer((char*)((char*)llama->weights + 2743403520), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2743403520, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2760180736 = device->newBuffer((half*)((char*)llama->weights + 2760180736), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2760180736, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_2760188928 = device->newBuffer((half*)((char*)llama->weights + 2760188928), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_2760188928, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_2760197120 = device->newBuffer((char*)((char*)llama->weights + 2760197120), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_2760197120, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_2805285888 = device->newBuffer((half*)((char*)llama->weights + 2805285888), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_2805285888, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_2805307904 = device->newBuffer((char*)((char*)llama->weights + 2805307904), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_2805307904, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_2850396672 = device->newBuffer((half*)((char*)llama->weights + 2850396672), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_2850396672, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_2850418688 = device->newBuffer((char*)((char*)llama->weights + 2850418688), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_2850418688, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_2895507456 = device->newBuffer((half*)((char*)llama->weights + 2895507456), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_2895507456, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_2895515648 = device->newBuffer((half*)((char*)llama->weights + 2895515648), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_2895515648, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2895523840 = device->newBuffer((char*)((char*)llama->weights + 2895523840), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2895523840, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2912301056 = device->newBuffer((half*)((char*)llama->weights + 2912301056), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2912301056, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_247, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2912309248 = device->newBuffer((char*)((char*)llama->weights + 2912309248), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2912309248, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2929086464 = device->newBuffer((half*)((char*)llama->weights + 2929086464), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2929086464, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_250, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2929094656 = device->newBuffer((char*)((char*)llama->weights + 2929094656), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2929094656, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2945871872 = device->newBuffer((half*)((char*)llama->weights + 2945871872), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2945871872, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_247, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_250, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_2945880064 = device->newBuffer((char*)((char*)llama->weights + 2945880064), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2945880064, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_2962657280 = device->newBuffer((half*)((char*)llama->weights + 2962657280), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_2962657280, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_2962665472 = device->newBuffer((half*)((char*)llama->weights + 2962665472), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_2962665472, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_2962673664 = device->newBuffer((char*)((char*)llama->weights + 2962673664), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_2962673664, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_3007762432 = device->newBuffer((half*)((char*)llama->weights + 3007762432), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3007762432, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_3007784448 = device->newBuffer((char*)((char*)llama->weights + 3007784448), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3007784448, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_3052873216 = device->newBuffer((half*)((char*)llama->weights + 3052873216), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3052873216, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_3052895232 = device->newBuffer((char*)((char*)llama->weights + 3052895232), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_3052895232, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_3097984000 = device->newBuffer((half*)((char*)llama->weights + 3097984000), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_3097984000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_3097992192 = device->newBuffer((half*)((char*)llama->weights + 3097992192), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_3097992192, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3098000384 = device->newBuffer((char*)((char*)llama->weights + 3098000384), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3098000384, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3114777600 = device->newBuffer((half*)((char*)llama->weights + 3114777600), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3114777600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_265, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3114785792 = device->newBuffer((char*)((char*)llama->weights + 3114785792), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3114785792, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3131563008 = device->newBuffer((half*)((char*)llama->weights + 3131563008), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3131563008, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_268, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3131571200 = device->newBuffer((char*)((char*)llama->weights + 3131571200), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3131571200, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3148348416 = device->newBuffer((half*)((char*)llama->weights + 3148348416), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3148348416, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_265, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_268, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3148356608 = device->newBuffer((char*)((char*)llama->weights + 3148356608), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3148356608, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3165133824 = device->newBuffer((half*)((char*)llama->weights + 3165133824), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3165133824, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_3165142016 = device->newBuffer((half*)((char*)llama->weights + 3165142016), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_3165142016, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_3165150208 = device->newBuffer((char*)((char*)llama->weights + 3165150208), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3165150208, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_3210238976 = device->newBuffer((half*)((char*)llama->weights + 3210238976), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3210238976, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_3210260992 = device->newBuffer((char*)((char*)llama->weights + 3210260992), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3210260992, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_3255349760 = device->newBuffer((half*)((char*)llama->weights + 3255349760), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3255349760, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_3255371776 = device->newBuffer((char*)((char*)llama->weights + 3255371776), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_3255371776, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_3300460544 = device->newBuffer((half*)((char*)llama->weights + 3300460544), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_3300460544, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_3300468736 = device->newBuffer((half*)((char*)llama->weights + 3300468736), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_3300468736, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3300476928 = device->newBuffer((char*)((char*)llama->weights + 3300476928), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3300476928, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3317254144 = device->newBuffer((half*)((char*)llama->weights + 3317254144), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3317254144, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_283, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3317262336 = device->newBuffer((char*)((char*)llama->weights + 3317262336), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3317262336, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3334039552 = device->newBuffer((half*)((char*)llama->weights + 3334039552), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3334039552, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_286, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3334047744 = device->newBuffer((char*)((char*)llama->weights + 3334047744), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3334047744, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3350824960 = device->newBuffer((half*)((char*)llama->weights + 3350824960), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3350824960, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_283, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_286, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3350833152 = device->newBuffer((char*)((char*)llama->weights + 3350833152), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3350833152, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3367610368 = device->newBuffer((half*)((char*)llama->weights + 3367610368), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3367610368, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_3367618560 = device->newBuffer((half*)((char*)llama->weights + 3367618560), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_3367618560, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_3367626752 = device->newBuffer((char*)((char*)llama->weights + 3367626752), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3367626752, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_3412715520 = device->newBuffer((half*)((char*)llama->weights + 3412715520), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3412715520, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_3412737536 = device->newBuffer((char*)((char*)llama->weights + 3412737536), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3412737536, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_3457826304 = device->newBuffer((half*)((char*)llama->weights + 3457826304), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3457826304, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_3457848320 = device->newBuffer((char*)((char*)llama->weights + 3457848320), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_3457848320, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_3502937088 = device->newBuffer((half*)((char*)llama->weights + 3502937088), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_3502937088, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_3502945280 = device->newBuffer((half*)((char*)llama->weights + 3502945280), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_3502945280, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3502953472 = device->newBuffer((char*)((char*)llama->weights + 3502953472), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3502953472, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3519730688 = device->newBuffer((half*)((char*)llama->weights + 3519730688), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3519730688, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_301, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3519738880 = device->newBuffer((char*)((char*)llama->weights + 3519738880), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3519738880, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3536516096 = device->newBuffer((half*)((char*)llama->weights + 3536516096), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3536516096, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_304, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3536524288 = device->newBuffer((char*)((char*)llama->weights + 3536524288), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3536524288, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3553301504 = device->newBuffer((half*)((char*)llama->weights + 3553301504), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3553301504, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_301, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_304, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3553309696 = device->newBuffer((char*)((char*)llama->weights + 3553309696), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3553309696, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3570086912 = device->newBuffer((half*)((char*)llama->weights + 3570086912), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3570086912, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_3570095104 = device->newBuffer((half*)((char*)llama->weights + 3570095104), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_3570095104, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_3570103296 = device->newBuffer((char*)((char*)llama->weights + 3570103296), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3570103296, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_3615192064 = device->newBuffer((half*)((char*)llama->weights + 3615192064), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3615192064, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_3615214080 = device->newBuffer((char*)((char*)llama->weights + 3615214080), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3615214080, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_3660302848 = device->newBuffer((half*)((char*)llama->weights + 3660302848), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3660302848, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_3660324864 = device->newBuffer((char*)((char*)llama->weights + 3660324864), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_3660324864, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_3705413632 = device->newBuffer((half*)((char*)llama->weights + 3705413632), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_3705413632, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_3705421824 = device->newBuffer((half*)((char*)llama->weights + 3705421824), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_3705421824, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3705430016 = device->newBuffer((char*)((char*)llama->weights + 3705430016), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3705430016, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3722207232 = device->newBuffer((half*)((char*)llama->weights + 3722207232), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3722207232, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_319, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3722215424 = device->newBuffer((char*)((char*)llama->weights + 3722215424), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3722215424, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3738992640 = device->newBuffer((half*)((char*)llama->weights + 3738992640), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3738992640, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_322, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3739000832 = device->newBuffer((char*)((char*)llama->weights + 3739000832), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3739000832, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3755778048 = device->newBuffer((half*)((char*)llama->weights + 3755778048), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3755778048, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_319, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_322, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3755786240 = device->newBuffer((char*)((char*)llama->weights + 3755786240), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3755786240, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3772563456 = device->newBuffer((half*)((char*)llama->weights + 3772563456), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3772563456, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_3772571648 = device->newBuffer((half*)((char*)llama->weights + 3772571648), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_3772571648, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_3772579840 = device->newBuffer((char*)((char*)llama->weights + 3772579840), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3772579840, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_3817668608 = device->newBuffer((half*)((char*)llama->weights + 3817668608), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3817668608, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_3817690624 = device->newBuffer((char*)((char*)llama->weights + 3817690624), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3817690624, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_3862779392 = device->newBuffer((half*)((char*)llama->weights + 3862779392), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3862779392, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_3862801408 = device->newBuffer((char*)((char*)llama->weights + 3862801408), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_3862801408, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_3907890176 = device->newBuffer((half*)((char*)llama->weights + 3907890176), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_3907890176, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_3907898368 = device->newBuffer((half*)((char*)llama->weights + 3907898368), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_3907898368, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3907906560 = device->newBuffer((char*)((char*)llama->weights + 3907906560), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3907906560, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3924683776 = device->newBuffer((half*)((char*)llama->weights + 3924683776), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3924683776, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_337, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3924691968 = device->newBuffer((char*)((char*)llama->weights + 3924691968), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3924691968, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3941469184 = device->newBuffer((half*)((char*)llama->weights + 3941469184), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3941469184, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_340, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3941477376 = device->newBuffer((char*)((char*)llama->weights + 3941477376), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3941477376, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3958254592 = device->newBuffer((half*)((char*)llama->weights + 3958254592), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3958254592, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_337, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_340, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_3958262784 = device->newBuffer((char*)((char*)llama->weights + 3958262784), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3958262784, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_3975040000 = device->newBuffer((half*)((char*)llama->weights + 3975040000), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_3975040000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_3975048192 = device->newBuffer((half*)((char*)llama->weights + 3975048192), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_3975048192, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_3975056384 = device->newBuffer((char*)((char*)llama->weights + 3975056384), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_3975056384, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_4020145152 = device->newBuffer((half*)((char*)llama->weights + 4020145152), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4020145152, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_4020167168 = device->newBuffer((char*)((char*)llama->weights + 4020167168), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4020167168, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_4065255936 = device->newBuffer((half*)((char*)llama->weights + 4065255936), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4065255936, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_4065277952 = device->newBuffer((char*)((char*)llama->weights + 4065277952), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_4065277952, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_4110366720 = device->newBuffer((half*)((char*)llama->weights + 4110366720), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_4110366720, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_4110374912 = device->newBuffer((half*)((char*)llama->weights + 4110374912), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_4110374912, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4110383104 = device->newBuffer((char*)((char*)llama->weights + 4110383104), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4110383104, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4127160320 = device->newBuffer((half*)((char*)llama->weights + 4127160320), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4127160320, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_355, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4127168512 = device->newBuffer((char*)((char*)llama->weights + 4127168512), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4127168512, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4143945728 = device->newBuffer((half*)((char*)llama->weights + 4143945728), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4143945728, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_358, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4143953920 = device->newBuffer((char*)((char*)llama->weights + 4143953920), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4143953920, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4160731136 = device->newBuffer((half*)((char*)llama->weights + 4160731136), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4160731136, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_355, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_358, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4160739328 = device->newBuffer((char*)((char*)llama->weights + 4160739328), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4160739328, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4177516544 = device->newBuffer((half*)((char*)llama->weights + 4177516544), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4177516544, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_4177524736 = device->newBuffer((half*)((char*)llama->weights + 4177524736), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_4177524736, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_4177532928 = device->newBuffer((char*)((char*)llama->weights + 4177532928), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4177532928, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_4222621696 = device->newBuffer((half*)((char*)llama->weights + 4222621696), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4222621696, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_4222643712 = device->newBuffer((char*)((char*)llama->weights + 4222643712), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4222643712, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_4267732480 = device->newBuffer((half*)((char*)llama->weights + 4267732480), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4267732480, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_4267754496 = device->newBuffer((char*)((char*)llama->weights + 4267754496), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_4267754496, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_4312843264 = device->newBuffer((half*)((char*)llama->weights + 4312843264), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_4312843264, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_4312851456 = device->newBuffer((half*)((char*)llama->weights + 4312851456), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_4312851456, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4312859648 = device->newBuffer((char*)((char*)llama->weights + 4312859648), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4312859648, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4329636864 = device->newBuffer((half*)((char*)llama->weights + 4329636864), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4329636864, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_373, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4329645056 = device->newBuffer((char*)((char*)llama->weights + 4329645056), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4329645056, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4346422272 = device->newBuffer((half*)((char*)llama->weights + 4346422272), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4346422272, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_376, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4346430464 = device->newBuffer((char*)((char*)llama->weights + 4346430464), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4346430464, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4363207680 = device->newBuffer((half*)((char*)llama->weights + 4363207680), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4363207680, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_373, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_376, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4363215872 = device->newBuffer((char*)((char*)llama->weights + 4363215872), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4363215872, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4379993088 = device->newBuffer((half*)((char*)llama->weights + 4379993088), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4379993088, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_4380001280 = device->newBuffer((half*)((char*)llama->weights + 4380001280), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_4380001280, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_4380009472 = device->newBuffer((char*)((char*)llama->weights + 4380009472), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4380009472, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_4425098240 = device->newBuffer((half*)((char*)llama->weights + 4425098240), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4425098240, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_4425120256 = device->newBuffer((char*)((char*)llama->weights + 4425120256), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4425120256, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_4470209024 = device->newBuffer((half*)((char*)llama->weights + 4470209024), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4470209024, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_4470231040 = device->newBuffer((char*)((char*)llama->weights + 4470231040), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_4470231040, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_4515319808 = device->newBuffer((half*)((char*)llama->weights + 4515319808), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_4515319808, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_4515328000 = device->newBuffer((half*)((char*)llama->weights + 4515328000), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_4515328000, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4515336192 = device->newBuffer((char*)((char*)llama->weights + 4515336192), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4515336192, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4532113408 = device->newBuffer((half*)((char*)llama->weights + 4532113408), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4532113408, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_391, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4532121600 = device->newBuffer((char*)((char*)llama->weights + 4532121600), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4532121600, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4548898816 = device->newBuffer((half*)((char*)llama->weights + 4548898816), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4548898816, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_394, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4548907008 = device->newBuffer((char*)((char*)llama->weights + 4548907008), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4548907008, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4565684224 = device->newBuffer((half*)((char*)llama->weights + 4565684224), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4565684224, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_391, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_394, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4565692416 = device->newBuffer((char*)((char*)llama->weights + 4565692416), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4565692416, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4582469632 = device->newBuffer((half*)((char*)llama->weights + 4582469632), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4582469632, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_4582477824 = device->newBuffer((half*)((char*)llama->weights + 4582477824), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_4582477824, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_4582486016 = device->newBuffer((char*)((char*)llama->weights + 4582486016), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4582486016, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_4627574784 = device->newBuffer((half*)((char*)llama->weights + 4627574784), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4627574784, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_4627596800 = device->newBuffer((char*)((char*)llama->weights + 4627596800), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4627596800, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_4672685568 = device->newBuffer((half*)((char*)llama->weights + 4672685568), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4672685568, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_4672707584 = device->newBuffer((char*)((char*)llama->weights + 4672707584), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_4672707584, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_4717796352 = device->newBuffer((half*)((char*)llama->weights + 4717796352), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_4717796352, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_4717804544 = device->newBuffer((half*)((char*)llama->weights + 4717804544), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_4717804544, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4717812736 = device->newBuffer((char*)((char*)llama->weights + 4717812736), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4717812736, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4734589952 = device->newBuffer((half*)((char*)llama->weights + 4734589952), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4734589952, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_409, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4734598144 = device->newBuffer((char*)((char*)llama->weights + 4734598144), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4734598144, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4751375360 = device->newBuffer((half*)((char*)llama->weights + 4751375360), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4751375360, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_412, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4751383552 = device->newBuffer((char*)((char*)llama->weights + 4751383552), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4751383552, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4768160768 = device->newBuffer((half*)((char*)llama->weights + 4768160768), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4768160768, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_409, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_412, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4768168960 = device->newBuffer((char*)((char*)llama->weights + 4768168960), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4768168960, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4784946176 = device->newBuffer((half*)((char*)llama->weights + 4784946176), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4784946176, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_4784954368 = device->newBuffer((half*)((char*)llama->weights + 4784954368), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_4784954368, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_4784962560 = device->newBuffer((char*)((char*)llama->weights + 4784962560), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4784962560, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_4830051328 = device->newBuffer((half*)((char*)llama->weights + 4830051328), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4830051328, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_4830073344 = device->newBuffer((char*)((char*)llama->weights + 4830073344), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4830073344, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_4875162112 = device->newBuffer((half*)((char*)llama->weights + 4875162112), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4875162112, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_4875184128 = device->newBuffer((char*)((char*)llama->weights + 4875184128), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_4875184128, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_4920272896 = device->newBuffer((half*)((char*)llama->weights + 4920272896), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_4920272896, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_4920281088 = device->newBuffer((half*)((char*)llama->weights + 4920281088), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_4920281088, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4920289280 = device->newBuffer((char*)((char*)llama->weights + 4920289280), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4920289280, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4937066496 = device->newBuffer((half*)((char*)llama->weights + 4937066496), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4937066496, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_427, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4937074688 = device->newBuffer((char*)((char*)llama->weights + 4937074688), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4937074688, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4953851904 = device->newBuffer((half*)((char*)llama->weights + 4953851904), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4953851904, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_430, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4953860096 = device->newBuffer((char*)((char*)llama->weights + 4953860096), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4953860096, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4970637312 = device->newBuffer((half*)((char*)llama->weights + 4970637312), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4970637312, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_427, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_430, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_4970645504 = device->newBuffer((char*)((char*)llama->weights + 4970645504), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4970645504, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_4987422720 = device->newBuffer((half*)((char*)llama->weights + 4987422720), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_4987422720, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_4987430912 = device->newBuffer((half*)((char*)llama->weights + 4987430912), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_4987430912, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_4987439104 = device->newBuffer((char*)((char*)llama->weights + 4987439104), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_4987439104, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_5032527872 = device->newBuffer((half*)((char*)llama->weights + 5032527872), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5032527872, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_5032549888 = device->newBuffer((char*)((char*)llama->weights + 5032549888), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5032549888, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_5077638656 = device->newBuffer((half*)((char*)llama->weights + 5077638656), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5077638656, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_5077660672 = device->newBuffer((char*)((char*)llama->weights + 5077660672), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_5077660672, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_5122749440 = device->newBuffer((half*)((char*)llama->weights + 5122749440), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_5122749440, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_5122757632 = device->newBuffer((half*)((char*)llama->weights + 5122757632), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_5122757632, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5122765824 = device->newBuffer((char*)((char*)llama->weights + 5122765824), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5122765824, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5139543040 = device->newBuffer((half*)((char*)llama->weights + 5139543040), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5139543040, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_445, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5139551232 = device->newBuffer((char*)((char*)llama->weights + 5139551232), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5139551232, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5156328448 = device->newBuffer((half*)((char*)llama->weights + 5156328448), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5156328448, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_448, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5156336640 = device->newBuffer((char*)((char*)llama->weights + 5156336640), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5156336640, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5173113856 = device->newBuffer((half*)((char*)llama->weights + 5173113856), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5173113856, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_445, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_448, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5173122048 = device->newBuffer((char*)((char*)llama->weights + 5173122048), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5173122048, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5189899264 = device->newBuffer((half*)((char*)llama->weights + 5189899264), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5189899264, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_5189907456 = device->newBuffer((half*)((char*)llama->weights + 5189907456), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_5189907456, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_5189915648 = device->newBuffer((char*)((char*)llama->weights + 5189915648), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5189915648, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_5235004416 = device->newBuffer((half*)((char*)llama->weights + 5235004416), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5235004416, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_5235026432 = device->newBuffer((char*)((char*)llama->weights + 5235026432), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5235026432, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_5280115200 = device->newBuffer((half*)((char*)llama->weights + 5280115200), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5280115200, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_5280137216 = device->newBuffer((char*)((char*)llama->weights + 5280137216), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_5280137216, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_5325225984 = device->newBuffer((half*)((char*)llama->weights + 5325225984), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_5325225984, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_5325234176 = device->newBuffer((half*)((char*)llama->weights + 5325234176), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_5325234176, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5325242368 = device->newBuffer((char*)((char*)llama->weights + 5325242368), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5325242368, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5342019584 = device->newBuffer((half*)((char*)llama->weights + 5342019584), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5342019584, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_463, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5342027776 = device->newBuffer((char*)((char*)llama->weights + 5342027776), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5342027776, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5358804992 = device->newBuffer((half*)((char*)llama->weights + 5358804992), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5358804992, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_466, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5358813184 = device->newBuffer((char*)((char*)llama->weights + 5358813184), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5358813184, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5375590400 = device->newBuffer((half*)((char*)llama->weights + 5375590400), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5375590400, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_463, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_466, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5375598592 = device->newBuffer((char*)((char*)llama->weights + 5375598592), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5375598592, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5392375808 = device->newBuffer((half*)((char*)llama->weights + 5392375808), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5392375808, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_5392384000 = device->newBuffer((half*)((char*)llama->weights + 5392384000), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_5392384000, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_5392392192 = device->newBuffer((char*)((char*)llama->weights + 5392392192), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5392392192, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_5437480960 = device->newBuffer((half*)((char*)llama->weights + 5437480960), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5437480960, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_5437502976 = device->newBuffer((char*)((char*)llama->weights + 5437502976), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5437502976, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_5482591744 = device->newBuffer((half*)((char*)llama->weights + 5482591744), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5482591744, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_5482613760 = device->newBuffer((char*)((char*)llama->weights + 5482613760), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_5482613760, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_5527702528 = device->newBuffer((half*)((char*)llama->weights + 5527702528), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_5527702528, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_5527710720 = device->newBuffer((half*)((char*)llama->weights + 5527710720), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_5527710720, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5527718912 = device->newBuffer((char*)((char*)llama->weights + 5527718912), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5527718912, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5544496128 = device->newBuffer((half*)((char*)llama->weights + 5544496128), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5544496128, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_481, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5544504320 = device->newBuffer((char*)((char*)llama->weights + 5544504320), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5544504320, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5561281536 = device->newBuffer((half*)((char*)llama->weights + 5561281536), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5561281536, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_484, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5561289728 = device->newBuffer((char*)((char*)llama->weights + 5561289728), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5561289728, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5578066944 = device->newBuffer((half*)((char*)llama->weights + 5578066944), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5578066944, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_481, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_484, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5578075136 = device->newBuffer((char*)((char*)llama->weights + 5578075136), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5578075136, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5594852352 = device->newBuffer((half*)((char*)llama->weights + 5594852352), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5594852352, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_5594860544 = device->newBuffer((half*)((char*)llama->weights + 5594860544), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_5594860544, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_5594868736 = device->newBuffer((char*)((char*)llama->weights + 5594868736), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5594868736, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_5639957504 = device->newBuffer((half*)((char*)llama->weights + 5639957504), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5639957504, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_5639979520 = device->newBuffer((char*)((char*)llama->weights + 5639979520), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5639979520, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_5685068288 = device->newBuffer((half*)((char*)llama->weights + 5685068288), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5685068288, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_5685090304 = device->newBuffer((char*)((char*)llama->weights + 5685090304), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_5685090304, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_5730179072 = device->newBuffer((half*)((char*)llama->weights + 5730179072), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_5730179072, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_5730187264 = device->newBuffer((half*)((char*)llama->weights + 5730187264), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_5730187264, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5730195456 = device->newBuffer((char*)((char*)llama->weights + 5730195456), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5730195456, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5746972672 = device->newBuffer((half*)((char*)llama->weights + 5746972672), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5746972672, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_499, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5746980864 = device->newBuffer((char*)((char*)llama->weights + 5746980864), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5746980864, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5763758080 = device->newBuffer((half*)((char*)llama->weights + 5763758080), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5763758080, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_502, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5763766272 = device->newBuffer((char*)((char*)llama->weights + 5763766272), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5763766272, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5780543488 = device->newBuffer((half*)((char*)llama->weights + 5780543488), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5780543488, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_499, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_502, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5780551680 = device->newBuffer((char*)((char*)llama->weights + 5780551680), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5780551680, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5797328896 = device->newBuffer((half*)((char*)llama->weights + 5797328896), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5797328896, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_5797337088 = device->newBuffer((half*)((char*)llama->weights + 5797337088), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_5797337088, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_5797345280 = device->newBuffer((char*)((char*)llama->weights + 5797345280), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5797345280, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_5842434048 = device->newBuffer((half*)((char*)llama->weights + 5842434048), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5842434048, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_5842456064 = device->newBuffer((char*)((char*)llama->weights + 5842456064), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5842456064, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_5887544832 = device->newBuffer((half*)((char*)llama->weights + 5887544832), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5887544832, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_5887566848 = device->newBuffer((char*)((char*)llama->weights + 5887566848), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_5887566848, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_5932655616 = device->newBuffer((half*)((char*)llama->weights + 5932655616), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_5932655616, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_5932663808 = device->newBuffer((half*)((char*)llama->weights + 5932663808), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_5932663808, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5932672000 = device->newBuffer((char*)((char*)llama->weights + 5932672000), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5932672000, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5949449216 = device->newBuffer((half*)((char*)llama->weights + 5949449216), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5949449216, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_517, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5949457408 = device->newBuffer((char*)((char*)llama->weights + 5949457408), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5949457408, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5966234624 = device->newBuffer((half*)((char*)llama->weights + 5966234624), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5966234624, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_520, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5966242816 = device->newBuffer((char*)((char*)llama->weights + 5966242816), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5966242816, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5983020032 = device->newBuffer((half*)((char*)llama->weights + 5983020032), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5983020032, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_517, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_520, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_5983028224 = device->newBuffer((char*)((char*)llama->weights + 5983028224), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5983028224, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_5999805440 = device->newBuffer((half*)((char*)llama->weights + 5999805440), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_5999805440, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_5999813632 = device->newBuffer((half*)((char*)llama->weights + 5999813632), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_5999813632, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_5999821824 = device->newBuffer((char*)((char*)llama->weights + 5999821824), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_5999821824, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_6044910592 = device->newBuffer((half*)((char*)llama->weights + 6044910592), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_6044910592, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_6044932608 = device->newBuffer((char*)((char*)llama->weights + 6044932608), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_6044932608, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_6090021376 = device->newBuffer((half*)((char*)llama->weights + 6090021376), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_6090021376, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_6090043392 = device->newBuffer((char*)((char*)llama->weights + 6090043392), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_6090043392, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_6135132160 = device->newBuffer((half*)((char*)llama->weights + 6135132160), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_6135132160, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_6135140352 = device->newBuffer((half*)((char*)llama->weights + 6135140352), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_6135140352, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_6135148544 = device->newBuffer((char*)((char*)llama->weights + 6135148544), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6135148544, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_6151925760 = device->newBuffer((half*)((char*)llama->weights + 6151925760), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6151925760, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_535, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_6151933952 = device->newBuffer((char*)((char*)llama->weights + 6151933952), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6151933952, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_6168711168 = device->newBuffer((half*)((char*)llama->weights + 6168711168), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6168711168, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_538, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_6168719360 = device->newBuffer((char*)((char*)llama->weights + 6168719360), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6168719360, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_6185496576 = device->newBuffer((half*)((char*)llama->weights + 6185496576), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6185496576, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_535, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_538, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_6185504768 = device->newBuffer((char*)((char*)llama->weights + 6185504768), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6185504768, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_6202281984 = device->newBuffer((half*)((char*)llama->weights + 6202281984), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6202281984, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_6202290176 = device->newBuffer((half*)((char*)llama->weights + 6202290176), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_6202290176, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_6202298368 = device->newBuffer((char*)((char*)llama->weights + 6202298368), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_6202298368, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_6247387136 = device->newBuffer((half*)((char*)llama->weights + 6247387136), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_6247387136, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_6247409152 = device->newBuffer((char*)((char*)llama->weights + 6247409152), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_6247409152, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_6292497920 = device->newBuffer((half*)((char*)llama->weights + 6292497920), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_6292497920, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_6292519936 = device->newBuffer((char*)((char*)llama->weights + 6292519936), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_6292519936, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_6337608704 = device->newBuffer((half*)((char*)llama->weights + 6337608704), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_6337608704, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_6337616896 = device->newBuffer((half*)((char*)llama->weights + 6337616896), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_6337616896, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_6337625088 = device->newBuffer((char*)((char*)llama->weights + 6337625088), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6337625088, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_6354402304 = device->newBuffer((half*)((char*)llama->weights + 6354402304), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6354402304, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_553, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_6354410496 = device->newBuffer((char*)((char*)llama->weights + 6354410496), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6354410496, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_6371187712 = device->newBuffer((half*)((char*)llama->weights + 6371187712), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6371187712, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_556, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_6371195904 = device->newBuffer((char*)((char*)llama->weights + 6371195904), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6371195904, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_6387973120 = device->newBuffer((half*)((char*)llama->weights + 6387973120), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6387973120, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_553, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_556, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_6387981312 = device->newBuffer((char*)((char*)llama->weights + 6387981312), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6387981312, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_6404758528 = device->newBuffer((half*)((char*)llama->weights + 6404758528), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6404758528, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_6404766720 = device->newBuffer((half*)((char*)llama->weights + 6404766720), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_6404766720, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_6404774912 = device->newBuffer((char*)((char*)llama->weights + 6404774912), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_6404774912, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_6449863680 = device->newBuffer((half*)((char*)llama->weights + 6449863680), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_6449863680, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_6449885696 = device->newBuffer((char*)((char*)llama->weights + 6449885696), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_6449885696, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_6494974464 = device->newBuffer((half*)((char*)llama->weights + 6494974464), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_6494974464, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_6494996480 = device->newBuffer((char*)((char*)llama->weights + 6494996480), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_6494996480, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_6540085248 = device->newBuffer((half*)((char*)llama->weights + 6540085248), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_6540085248, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_6540093440 = device->newBuffer((half*)((char*)llama->weights + 6540093440), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_6540093440, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_6540101632 = device->newBuffer((char*)((char*)llama->weights + 6540101632), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6540101632, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_6556878848 = device->newBuffer((half*)((char*)llama->weights + 6556878848), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6556878848, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_571, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_6556887040 = device->newBuffer((char*)((char*)llama->weights + 6556887040), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6556887040, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_6573664256 = device->newBuffer((half*)((char*)llama->weights + 6573664256), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6573664256, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_574, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_6573672448 = device->newBuffer((char*)((char*)llama->weights + 6573672448), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6573672448, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_6590449664 = device->newBuffer((half*)((char*)llama->weights + 6590449664), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6590449664, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_279065600, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_571, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_574, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_32_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_1024_32_4_4_weights_6590457856 = device->newBuffer((char*)((char*)llama->weights + 6590457856), 16777216 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6590457856, 0, 1);
 MTL::Buffer* E_32_1024_32_4_4_weights_6607235072 = device->newBuffer((half*)((char*)llama->weights + 6607235072), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_1024_32_4_4_weights_6607235072, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3n1_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 MTL::Buffer* E_64_2_16_4_3n1_weights_6607243264 = device->newBuffer((half*)((char*)llama->weights + 6607243264), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3n1_weights_6607243264, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_6607251456 = device->newBuffer((char*)((char*)llama->weights + 6607251456), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_6607251456, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_6652340224 = device->newBuffer((half*)((char*)llama->weights + 6652340224), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_6652340224, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(E_32_2752_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 MTL::Buffer* E_32_2752_32_4_4_weights_6652362240 = device->newBuffer((char*)((char*)llama->weights + 6652362240), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_6652362240, 0, 1);
 MTL::Buffer* E_32_2752_32_4_4_weights_6697451008 = device->newBuffer((half*)((char*)llama->weights + 6697451008), 11008 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_2752_32_4_4_weights_6697451008, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2752,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_19, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_9, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_86_1024_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_86_1024_32_4_4_weights_6697473024 = device->newBuffer((char*)((char*)llama->weights + 6697473024), 45088768 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_6697473024, 0, 1);
 MTL::Buffer* E_86_1024_32_4_4_weights_6742561792 = device->newBuffer((half*)((char*)llama->weights + 6742561792), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_86_1024_32_4_4_weights_6742561792, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(1024,86,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_20, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_64_2_16_4_3_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_9, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 MTL::Buffer* E_64_2_16_4_3_weights_6742569984 = device->newBuffer((half*)((char*)llama->weights + 6742569984), 4096 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_64_2_16_4_3_weights_6742569984, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_32_8000_32_4_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 MTL::Buffer* E_32_8000_32_4_4_weights_6742578176 = device->newBuffer((char*)((char*)llama->weights + 6742578176), 131072000 * sizeof(char), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_8000_32_4_4_weights_6742578176, 0, 1);
 MTL::Buffer* E_32_8000_32_4_4_weights_6873650176 = device->newBuffer((half*)((char*)llama->weights + 6873650176), 32000 * sizeof(half), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_32_8000_32_4_4_weights_6873650176, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(8000,32,1), MTL::Size(4,32,1));

 encoder->setComputePipelineState(r_500_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_4, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(500,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_256_125_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(1,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_250_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(250,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_256_125n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(1,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_250_32_4n1_pso);
 encoder->setBuffer(outputs, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(250,1,1), MTL::Size(32,1,1));

 encoder->endEncoding();
}

void log_output() {
  int total = outputs->length() / sizeof(float);
  float* out = static_cast<float*>(outputs->contents());

  for (int i=0; i<total; ++i) {
    if (out != nullptr) {
      printf("%.2f\n", *out);
      out++;
    }
  }
}

int main(int argc, char* argv[]) {
  // both represents a metal context
  MTL::Device* device = MTL::CreateSystemDefaultDevice();
  MTL::CommandQueue* queue = device->newCommandQueue();

  MTL::Library* library = device->newDefaultLibrary();
  if (!library) assert(false);

  MTL::CommandBuffer* command_buffer = queue->commandBuffer();
  MTL::ComputeCommandEncoder* encoder = command_buffer->computeCommandEncoder();

  // LOAD MODEL
  std::cout << "loading weights\n";
  int fd = -1;
  if ((fd = open("compiled/weights_metal.bin", O_RDONLY)) == -1) {
    std::cerr << "failed to open\n";
    return EXIT_FAILURE;
  }
  struct stat fesb;
  fstat(fd, &fesb);
  void *weights = mmap(NULL, fesb.st_size, PROT_READ, MAP_SHARED, fd, 0);
  assert(weights != MAP_FAILED);
  model_t *llama = (model_t *)malloc(sizeof(model_t));
  llama->weights = weights;

  init(device, library);
  encode(encoder, device, llama);

  std::vector<float> inputs {1, 15043, 29892, 590, 1024, 338};
  memcpy(input0->contents(), inputs.data(), inputs.size() * sizeof(float));

  command_buffer->commit(); // MUST schedule to run the kernels
  command_buffer->waitUntilCompleted();

  log_output();
}
