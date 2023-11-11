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

// using METAL backend
// with export target: metal
typedef struct { void* weights; } model_t;
MTL::Buffer* scratch_0;
MTL::Buffer* scratch_1;
MTL::Buffer* scratch_2;
MTL::Buffer* input0;
MTL::Buffer* scratch_4;
MTL::Buffer* scratch_6;
MTL::Buffer* scratch_7;
MTL::Buffer* scratch_9;
MTL::Buffer* scratch_10;
MTL::Buffer* scratch_11;
MTL::Buffer* scratch_12;
MTL::Buffer* scratch_13;
MTL::Buffer* scratch_14;
MTL::Buffer* scratch_15;
MTL::Buffer* scratch_16;
MTL::Buffer* scratch_17;
MTL::Buffer* scratch_18;
MTL::Buffer* scratch_19;
MTL::Buffer* scratch_20;
MTL::Buffer* scratch_21;
MTL::Buffer* scratch_22;
MTL::Buffer* scratch_23;
MTL::Buffer* scratch_24;
MTL::Buffer* scratch_25;
MTL::Buffer* scratch_26;
MTL::Buffer* scratch_27;
MTL::Buffer* scratch_28;
MTL::Buffer* scratch_29;
MTL::Buffer* scratch_30;
MTL::Buffer* scratch_31;
MTL::Buffer* scratch_32;
MTL::Buffer* scratch_33;
MTL::Buffer* scratch_34;
MTL::Buffer* scratch_35;
MTL::Buffer* scratch_36;
MTL::Buffer* scratch_37;
MTL::Buffer* scratch_38;
MTL::Buffer* scratch_39;
MTL::Buffer* scratch_40;
MTL::Buffer* scratch_41;
MTL::Buffer* scratch_42;
MTL::Buffer* scratch_43;
MTL::Buffer* scratch_44;
MTL::Buffer* scratch_45;
MTL::Buffer* scratch_46;
MTL::Buffer* scratch_47;
MTL::Buffer* scratch_48;
MTL::Buffer* scratch_49;
MTL::Buffer* scratch_50;
MTL::Buffer* scratch_51;
MTL::Buffer* scratch_52;
MTL::Buffer* scratch_53;
MTL::Buffer* scratch_54;
MTL::Buffer* scratch_55;
MTL::Buffer* scratch_56;
MTL::Buffer* scratch_57;
MTL::Buffer* scratch_58;
MTL::Buffer* scratch_59;
MTL::Buffer* scratch_60;
MTL::Buffer* scratch_61;
MTL::Buffer* scratch_62;
MTL::Buffer* scratch_63;
MTL::Buffer* scratch_64;
MTL::Buffer* scratch_65;
MTL::Buffer* scratch_66;
MTL::Buffer* scratch_67;
MTL::Buffer* scratch_68;
MTL::Buffer* scratch_69;
MTL::Buffer* scratch_70;
MTL::Buffer* scratch_71;
MTL::Buffer* scratch_72;
MTL::Buffer* scratch_73;
MTL::Buffer* outputs;
MTL::ComputePipelineState* r_6_32_6n1_pso;
MTL::ComputePipelineState* E_352256_32_4n1_pso;
MTL::ComputePipelineState* E_250_32_4_pso;
MTL::ComputePipelineState* r_172_2_16_1024_4_4_3n1_pso;
MTL::ComputePipelineState* r_2_2_8_3_3_32_4_4_pso;
MTL::ComputePipelineState* E_6_32_2_3n1_pso;
MTL::ComputePipelineState* r_6_256_16_pso;
MTL::ComputePipelineState* E_352256_32_4_pso;
MTL::ComputePipelineState* E_131072_32_4_pso;
MTL::ComputePipelineState* E_6_32_2_3_pso;
MTL::ComputePipelineState* E_6_4_8_16_2_4_pso;
MTL::ComputePipelineState* E_500_2_16_4_3_pso;
MTL::ComputePipelineState* E_2_64_3_16_4n1_pso;
MTL::ComputePipelineState* r_256_125n1_pso;
MTL::ComputePipelineState* r_6_6_pso;
MTL::ComputePipelineState* r_64_2_16_1024_4_4_3n1_pso;
MTL::ComputePipelineState* r_6_256_16n1_pso;
MTL::ComputePipelineState* E_2_64_3_16_4_pso;
MTL::ComputePipelineState* r_6_32_6_pso;
MTL::ComputePipelineState* r_6_6n1_pso;
MTL::ComputePipelineState* E_250_32_4n1_pso;
MTL::ComputePipelineState* r_172_2_16_1024_4_4_3_pso;
MTL::ComputePipelineState* r_64_2_16_2752_4_4_3_pso;
MTL::ComputePipelineState* E_1024000_32_4n1_pso;
MTL::ComputePipelineState* r_64_2_16_1024_4_4_3_pso;
MTL::ComputePipelineState* r_500_2_16_1024_4_4_3_pso;
MTL::ComputePipelineState* r_256_125_pso;
MTL::ComputePipelineState* E_2_2_3_3_pso;
MTL::ComputePipelineState* r_8_2_4_2_16_6_4_3_pso;
MTL::ComputePipelineState* r_64_2_16_8000_4_4_3_pso;
void init(MTL::Device* device, MTL::Library* library) {
 scratch_0 = device->newBuffer(131072000 * sizeof(half), MTL::ResourceStorageModeManaged);
 scratch_1 = device->newBuffer(45088768 * sizeof(half), MTL::ResourceStorageModeManaged);
 scratch_2 = device->newBuffer(36 * sizeof(float), MTL::ResourceStorageModeManaged);
 input0 = device->newBuffer(6 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_4 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_6 = device->newBuffer(66048 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_7 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_9 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_10 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_11 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_12 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_13 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_14 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_15 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_16 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_17 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_18 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_19 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_20 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_21 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_22 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_23 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_24 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_25 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_26 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_27 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_28 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_29 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_30 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_31 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_32 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_33 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_34 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_35 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_36 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_37 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_38 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_39 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_40 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_41 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_42 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_43 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_44 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_45 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_46 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_47 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_48 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_49 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_50 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_51 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_52 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_53 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_54 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_55 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_56 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_57 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_58 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_59 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_60 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_61 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_62 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_63 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_64 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_65 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_66 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_67 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_68 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_69 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_70 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_71 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_72 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 scratch_73 = device->newBuffer(24576 * sizeof(float), MTL::ResourceStorageModeManaged);
 outputs = device->newBuffer(32000 * sizeof(float), MTL::ResourceStorageModeManaged);
 MTL::Function* r_6_32_6n1 = library->newFunction(NS::String::string("r_6_32_6n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_6_32_6n1_err = nullptr; r_6_32_6n1_pso = device->newComputePipelineState(r_6_32_6n1, &r_6_32_6n1_err);


 MTL::Function* E_352256_32_4n1 = library->newFunction(NS::String::string("E_352256_32_4n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_352256_32_4n1_err = nullptr; E_352256_32_4n1_pso = device->newComputePipelineState(E_352256_32_4n1, &E_352256_32_4n1_err);


 MTL::Function* E_250_32_4 = library->newFunction(NS::String::string("E_250_32_4", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_250_32_4_err = nullptr; E_250_32_4_pso = device->newComputePipelineState(E_250_32_4, &E_250_32_4_err);


 MTL::Function* r_172_2_16_1024_4_4_3n1 = library->newFunction(NS::String::string("r_172_2_16_1024_4_4_3n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_172_2_16_1024_4_4_3n1_err = nullptr; r_172_2_16_1024_4_4_3n1_pso = device->newComputePipelineState(r_172_2_16_1024_4_4_3n1, &r_172_2_16_1024_4_4_3n1_err);


 MTL::Function* r_2_2_8_3_3_32_4_4 = library->newFunction(NS::String::string("r_2_2_8_3_3_32_4_4", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_2_2_8_3_3_32_4_4_err = nullptr; r_2_2_8_3_3_32_4_4_pso = device->newComputePipelineState(r_2_2_8_3_3_32_4_4, &r_2_2_8_3_3_32_4_4_err);


 MTL::Function* E_6_32_2_3n1 = library->newFunction(NS::String::string("E_6_32_2_3n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_6_32_2_3n1_err = nullptr; E_6_32_2_3n1_pso = device->newComputePipelineState(E_6_32_2_3n1, &E_6_32_2_3n1_err);


 MTL::Function* r_6_256_16 = library->newFunction(NS::String::string("r_6_256_16", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_6_256_16_err = nullptr; r_6_256_16_pso = device->newComputePipelineState(r_6_256_16, &r_6_256_16_err);


 MTL::Function* E_352256_32_4 = library->newFunction(NS::String::string("E_352256_32_4", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_352256_32_4_err = nullptr; E_352256_32_4_pso = device->newComputePipelineState(E_352256_32_4, &E_352256_32_4_err);


 MTL::Function* E_131072_32_4 = library->newFunction(NS::String::string("E_131072_32_4", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_131072_32_4_err = nullptr; E_131072_32_4_pso = device->newComputePipelineState(E_131072_32_4, &E_131072_32_4_err);


 MTL::Function* E_6_32_2_3 = library->newFunction(NS::String::string("E_6_32_2_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_6_32_2_3_err = nullptr; E_6_32_2_3_pso = device->newComputePipelineState(E_6_32_2_3, &E_6_32_2_3_err);


 MTL::Function* E_6_4_8_16_2_4 = library->newFunction(NS::String::string("E_6_4_8_16_2_4", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_6_4_8_16_2_4_err = nullptr; E_6_4_8_16_2_4_pso = device->newComputePipelineState(E_6_4_8_16_2_4, &E_6_4_8_16_2_4_err);


 MTL::Function* E_500_2_16_4_3 = library->newFunction(NS::String::string("E_500_2_16_4_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_500_2_16_4_3_err = nullptr; E_500_2_16_4_3_pso = device->newComputePipelineState(E_500_2_16_4_3, &E_500_2_16_4_3_err);


 MTL::Function* E_2_64_3_16_4n1 = library->newFunction(NS::String::string("E_2_64_3_16_4n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_2_64_3_16_4n1_err = nullptr; E_2_64_3_16_4n1_pso = device->newComputePipelineState(E_2_64_3_16_4n1, &E_2_64_3_16_4n1_err);


 MTL::Function* r_256_125n1 = library->newFunction(NS::String::string("r_256_125n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_256_125n1_err = nullptr; r_256_125n1_pso = device->newComputePipelineState(r_256_125n1, &r_256_125n1_err);


 MTL::Function* r_6_6 = library->newFunction(NS::String::string("r_6_6", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_6_6_err = nullptr; r_6_6_pso = device->newComputePipelineState(r_6_6, &r_6_6_err);


 MTL::Function* r_64_2_16_1024_4_4_3n1 = library->newFunction(NS::String::string("r_64_2_16_1024_4_4_3n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_64_2_16_1024_4_4_3n1_err = nullptr; r_64_2_16_1024_4_4_3n1_pso = device->newComputePipelineState(r_64_2_16_1024_4_4_3n1, &r_64_2_16_1024_4_4_3n1_err);


 MTL::Function* r_6_256_16n1 = library->newFunction(NS::String::string("r_6_256_16n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_6_256_16n1_err = nullptr; r_6_256_16n1_pso = device->newComputePipelineState(r_6_256_16n1, &r_6_256_16n1_err);


 MTL::Function* E_2_64_3_16_4 = library->newFunction(NS::String::string("E_2_64_3_16_4", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_2_64_3_16_4_err = nullptr; E_2_64_3_16_4_pso = device->newComputePipelineState(E_2_64_3_16_4, &E_2_64_3_16_4_err);


 MTL::Function* r_6_32_6 = library->newFunction(NS::String::string("r_6_32_6", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_6_32_6_err = nullptr; r_6_32_6_pso = device->newComputePipelineState(r_6_32_6, &r_6_32_6_err);


 MTL::Function* r_6_6n1 = library->newFunction(NS::String::string("r_6_6n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_6_6n1_err = nullptr; r_6_6n1_pso = device->newComputePipelineState(r_6_6n1, &r_6_6n1_err);


 MTL::Function* E_250_32_4n1 = library->newFunction(NS::String::string("E_250_32_4n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_250_32_4n1_err = nullptr; E_250_32_4n1_pso = device->newComputePipelineState(E_250_32_4n1, &E_250_32_4n1_err);


 MTL::Function* r_172_2_16_1024_4_4_3 = library->newFunction(NS::String::string("r_172_2_16_1024_4_4_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_172_2_16_1024_4_4_3_err = nullptr; r_172_2_16_1024_4_4_3_pso = device->newComputePipelineState(r_172_2_16_1024_4_4_3, &r_172_2_16_1024_4_4_3_err);


 MTL::Function* r_64_2_16_2752_4_4_3 = library->newFunction(NS::String::string("r_64_2_16_2752_4_4_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_64_2_16_2752_4_4_3_err = nullptr; r_64_2_16_2752_4_4_3_pso = device->newComputePipelineState(r_64_2_16_2752_4_4_3, &r_64_2_16_2752_4_4_3_err);


 MTL::Function* E_1024000_32_4n1 = library->newFunction(NS::String::string("E_1024000_32_4n1", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_1024000_32_4n1_err = nullptr; E_1024000_32_4n1_pso = device->newComputePipelineState(E_1024000_32_4n1, &E_1024000_32_4n1_err);


 MTL::Function* r_64_2_16_1024_4_4_3 = library->newFunction(NS::String::string("r_64_2_16_1024_4_4_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_64_2_16_1024_4_4_3_err = nullptr; r_64_2_16_1024_4_4_3_pso = device->newComputePipelineState(r_64_2_16_1024_4_4_3, &r_64_2_16_1024_4_4_3_err);


 MTL::Function* r_500_2_16_1024_4_4_3 = library->newFunction(NS::String::string("r_500_2_16_1024_4_4_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_500_2_16_1024_4_4_3_err = nullptr; r_500_2_16_1024_4_4_3_pso = device->newComputePipelineState(r_500_2_16_1024_4_4_3, &r_500_2_16_1024_4_4_3_err);


 MTL::Function* r_256_125 = library->newFunction(NS::String::string("r_256_125", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_256_125_err = nullptr; r_256_125_pso = device->newComputePipelineState(r_256_125, &r_256_125_err);


 MTL::Function* E_2_2_3_3 = library->newFunction(NS::String::string("E_2_2_3_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* E_2_2_3_3_err = nullptr; E_2_2_3_3_pso = device->newComputePipelineState(E_2_2_3_3, &E_2_2_3_3_err);


 MTL::Function* r_8_2_4_2_16_6_4_3 = library->newFunction(NS::String::string("r_8_2_4_2_16_6_4_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_8_2_4_2_16_6_4_3_err = nullptr; r_8_2_4_2_16_6_4_3_pso = device->newComputePipelineState(r_8_2_4_2_16_6_4_3, &r_8_2_4_2_16_6_4_3_err);


 MTL::Function* r_64_2_16_8000_4_4_3 = library->newFunction(NS::String::string("r_64_2_16_8000_4_4_3", NS::StringEncoding::UTF8StringEncoding));
 NS::Error* r_64_2_16_8000_4_4_3_err = nullptr; r_64_2_16_8000_4_4_3_pso = device->newComputePipelineState(r_64_2_16_8000_4_4_3, &r_64_2_16_8000_4_4_3_err);


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
 MTL::Buffer* E_500_2_16_4_3_weights_0 = device->newBuffer((float*)(llama->weights) + 0, 128000 * sizeof(float), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_500_2_16_4_3_weights_0, 0, 1);
 encoder->setBuffer(input0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(500,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_64_2_16_8000_4_4_3_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 MTL::Buffer* r_64_2_16_8000_4_4_3_weights_512000 = device->newBuffer((float*)(llama->weights) + 512000, 524288000 * sizeof(float), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(r_64_2_16_8000_4_4_3_weights_512000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_4, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_4, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_7, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 MTL::Buffer* E_6_4_8_16_2_4_weights_2097664000 = device->newBuffer((float*)(llama->weights) + 2097664000, 1048576 * sizeof(float), MTL::ResourceStorageModeManaged);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_9, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_7, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_9, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_4, 0, 1);
 encoder->setBuffer(scratch_10, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_4, 0, 1);
 encoder->setBuffer(scratch_10, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_4, 0, 1);
 encoder->setBuffer(scratch_10, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_12, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_13, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_12, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_13, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_14, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_15, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_14, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_15, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_16, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_17, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_16, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_17, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_18, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_19, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_18, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_19, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_20, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_21, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_20, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_21, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_22, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_23, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_22, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_23, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_24, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_25, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_24, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_25, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_26, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_27, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_26, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_27, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_28, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_29, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_28, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_29, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_30, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_31, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_30, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_31, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_32, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_33, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_32, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_33, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_34, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_35, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_34, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_35, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_36, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_37, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_36, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_37, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_38, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_39, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_38, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_39, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_40, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_41, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_40, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_41, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_42, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_43, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_42, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_43, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_44, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_45, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_44, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_45, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_46, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_47, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_46, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_47, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_48, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_49, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_48, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_49, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_50, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_51, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_50, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_51, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_52, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_53, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_52, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_53, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_54, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_55, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_54, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_55, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_56, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_57, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_56, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_57, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_58, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_59, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_58, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_59, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_60, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_61, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_60, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_61, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_62, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_63, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_62, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_63, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_64, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_65, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_64, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_65, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_66, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_67, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_66, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_67, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_68, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_69, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_68, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_69, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_70, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_71, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_70, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_71, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_11, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_72, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_73, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_6_4_8_16_2_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(E_6_4_8_16_2_4_weights_2097664000, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(4,6,1), MTL::Size(16,8,1));

 encoder->setComputePipelineState(r_2_2_8_3_3_32_4_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_72, 0, 2);
 encoder->setBuffer(scratch_2, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(2,2,1), MTL::Size(3,3,8));

 encoder->setComputePipelineState(r_6_32_6_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_6_32_6n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_6_32_2_3n1_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_0, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(2,32,1));

 encoder->setComputePipelineState(r_8_2_4_2_16_6_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_73, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(2,8,1), MTL::Size(16,2,4));

 encoder->setComputePipelineState(E_131072_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(131072,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4n1_pso);
 encoder->setBuffer(scratch_10, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_0, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(E_352256_32_4_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_1, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_172_2_16_1024_4_4_3n1_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_10, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->setBuffer(scratch_6, 0, 3);
 encoder->dispatchThreadgroups(MTL::Size(172,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(E_352256_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(352256,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_64_2_16_2752_4_4_3_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_11, 0, 1);
 encoder->setBuffer(scratch_4, 0, 2);
 encoder->setBuffer(scratch_1, 0, 3);
 encoder->setBuffer(scratch_0, 0, 4);
 encoder->dispatchThreadgroups(MTL::Size(64,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_6_256_16_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(6,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_2_64_3_16_4_pso);
 encoder->setBuffer(scratch_4, 0, 0);
 encoder->setBuffer(scratch_6, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(64,2,1), MTL::Size(16,3,1));

 encoder->setComputePipelineState(E_1024000_32_4n1_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->dispatchThreadgroups(MTL::Size(1024000,1,1), MTL::Size(32,1,1));

 encoder->setComputePipelineState(r_500_2_16_1024_4_4_3_pso);
 encoder->setBuffer(scratch_1, 0, 0);
 encoder->setBuffer(scratch_4, 0, 1);
 encoder->setBuffer(scratch_0, 0, 2);
 encoder->dispatchThreadgroups(MTL::Size(500,1,1), MTL::Size(16,2,1));

 encoder->setComputePipelineState(r_256_125_pso);
 encoder->setBuffer(scratch_6, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->dispatchThreadgroups(MTL::Size(1,1,1), MTL::Size(256,1,1));

 encoder->setComputePipelineState(E_250_32_4_pso);
 encoder->setBuffer(scratch_0, 0, 0);
 encoder->setBuffer(scratch_1, 0, 1);
 encoder->setBuffer(scratch_6, 0, 2);
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
