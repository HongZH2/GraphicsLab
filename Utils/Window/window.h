//
// Created by zhanghong50 on 2022/6/30.
//

#ifndef GRAPHICS_LEARNING_WINDOW_H
#define GRAPHICS_LEARNING_WINDOW_H

#include <iosfwd>
#include "GLFW/glfw3.h"

namespace GraphicsLearning{

    class Window{
    public:
        Window();
        ~Window();

        GLFWwindow * window_;

        void init(uint32_t width, uint32_t height);   // initialize the window
        void updateWindow(); // render
        void destoryWindow();
        bool isClosed();
    };

}



#endif //GRAPHICS_LEARNING_WINDOW_H
