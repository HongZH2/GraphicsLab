//
// Created by zhanghong50 on 2022/6/30.
//

#include "window.h"

namespace GraphicsLearning{

    Window::Window() {

    }

    Window::~Window() {

    }

    void Window::init(uint32_t width, uint32_t height) {
        // setup window
        if (!glfwInit()){
            printf("Fails to initialize glfw!");
            return;
        }

        // Decide GL+GLSL versions
        // GL 3.2 + GLSL 150
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);  // 3.2+ only
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);            // Required on Mac

        glfwWindowHint(GLFW_SAMPLES, 4);  // enable multiple sampling for anti-aliasing

        window_ = glfwCreateWindow(width, height, "Graphics Learning__HongZH", NULL, NULL);
        if (window_ == NULL){
            printf("Fail to initialize window!!\n");
            return;
        }
        glfwMakeContextCurrent(window_);
        glfwSwapInterval(1); // Enable vsync
    }

    void Window::updateWindow(){
        glfwPollEvents();
        glfwMakeContextCurrent(window_);
        glfwSwapBuffers(window_);
    }

    void Window::destoryWindow(){
        glfwDestroyWindow(window_);
        glfwTerminate();
    }

    bool Window::isClosed(){
        return !glfwWindowShouldClose(window_);
    }

}