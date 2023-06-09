#pragma once

struct GLFWwindow;

struct Color {};

struct WGPUAdapterImpl;
struct WGPUBindGroupImpl;
struct WGPUBindGroupLayoutImpl;
struct WGPUBufferImpl;
struct WGPUCommandBufferImpl;
struct WGPUCommandEncoderImpl;
struct WGPUComputePassEncoderImpl;
struct WGPUComputePipelineImpl;
struct WGPUDeviceImpl;
struct WGPUInstanceImpl;
struct WGPUPipelineLayoutImpl;
struct WGPUQuerySetImpl;
struct WGPUQueueImpl;
struct WGPURenderBundleImpl;
struct WGPURenderBundleEncoderImpl;
struct WGPURenderPassEncoderImpl;
struct WGPURenderPipelineImpl;
struct WGPUSamplerImpl;
struct WGPUShaderModuleImpl;
struct WGPUSurfaceImpl;
struct WGPUSwapChainImpl;
struct WGPUTextureImpl;
struct WGPUTextureViewImpl;

typedef struct WGPUAdapterImpl* WGPUAdapter;
typedef struct WGPUBindGroupImpl* WGPUBindGroup;
typedef struct WGPUBindGroupLayoutImpl* WGPUBindGroupLayout;
typedef struct WGPUBufferImpl* WGPUBuffer;
typedef struct WGPUCommandBufferImpl* WGPUCommandBuffer;
typedef struct WGPUCommandEncoderImpl* WGPUCommandEncoder;
typedef struct WGPUComputePassEncoderImpl* WGPUComputePassEncoder;
typedef struct WGPUComputePipelineImpl* WGPUComputePipeline;
typedef struct WGPUDeviceImpl* WGPUDevice;
typedef struct WGPUInstanceImpl* WGPUInstance;
typedef struct WGPUPipelineLayoutImpl* WGPUPipelineLayout;
typedef struct WGPUQuerySetImpl* WGPUQuerySet;
typedef struct WGPUQueueImpl* WGPUQueue;
typedef struct WGPURenderBundleImpl* WGPURenderBundle;
typedef struct WGPURenderBundleEncoderImpl* WGPURenderBundleEncoder;
typedef struct WGPURenderPassEncoderImpl* WGPURenderPassEncoder;
typedef struct WGPURenderPipelineImpl* WGPURenderPipeline;
typedef struct WGPUSamplerImpl* WGPUSampler;
typedef struct WGPUShaderModuleImpl* WGPUShaderModule;
typedef struct WGPUSurfaceImpl* WGPUSurface;
typedef struct WGPUSwapChainImpl* WGPUSwapChain;
typedef struct WGPUTextureImpl* WGPUTexture;
typedef struct WGPUTextureViewImpl* WGPUTextureView;