//
// Created by zhanghong50 on 2022/7/1.
//

#ifndef GRAPHICS_LEARNING_MYGUI_H
#define GRAPHICS_LEARNING_MYGUI_H

#include "Window/gui.h"
namespace GraphicsLearning {
    class MyGui : public Gui {
    public:
        MyGui():Gui(){}
        ~MyGui() = default;

        void renderWidgets() override;
    };
}


#endif //GRAPHICS_LEARNING_MYGUI_H
