//
// Created by zhanghong50 on 2022/7/1.
//

#ifndef GRAPHICS_LEARNING_GUI_H
#define GRAPHICS_LEARNING_GUI_H

#include "imgui.h"
#include "imgui_internal.h"
#include "backends/imgui_impl_glfw.h"
#include "backends/imgui_impl_opengl3.h"
#include "GLFW/glfw3.h"

namespace GraphicsLearning {

    class Gui {
    public:
        Gui() = default;
        ~Gui() = default;
    public:
        virtual void initGui(GLFWwindow *window);

        virtual void renderGui();

        virtual void destoryGui();

        virtual void renderWidgets() = 0;

        GLFWwindow *window_;
    };

}


#endif //GRAPHICS_LEARNING_GUI_H
