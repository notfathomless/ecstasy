#pragma once
#include <cstdint>
#include <string>
#include <ecstasy/fd.h>
#include <entt/entt.hpp>
#include <ecstasy/scene.hpp>
#include <ecstasy/shader.hpp>
#include <ecstasy/texture.hpp>
#include <ecstasy/material.hpp>
#include <ecstasy/geometry.hpp>
#include <ecstasy/mesh.hpp>
#include <Eigen/Dense>

// auto create a default scene

namespace ecstasy {

class app {
    friend class shader;

  private:
    std::string app_name_;
    std::uint32_t window_width_;
    std::uint32_t window_height_;
    Eigen::Vector4d clear_color_{0.5, 0.5, 0.5, 1.0};

    entt::registry registry_;

    GLFWwindow* window_;
    WGPUAdapter webgpu_adapter_;
    WGPUDevice webgpu_device_;
    WGPUInstance webgpu_instance_;
    WGPUCommandEncoder webgpu_encoder_;
    WGPUQueue webgpu_queue_;
    WGPUSwapChain webgpu_swapchain_;
    WGPURenderPipeline render_pipeline_;

  public:
    app(std::string _app_name = "Ecstasy", std::uint32_t _window_width = 1280U,
        std::uint32_t _window_height = 720U);
    // ecstasy::scene createScene();
    void setClearColor(const Eigen::Vector4d& _clear_color) noexcept;
    bool shouldClose() const noexcept;
    void animate();
    ~app();
};
} // namespace ecstasy
