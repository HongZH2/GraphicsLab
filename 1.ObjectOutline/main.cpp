//
// Created by zhanghong50 on 2022/7/1.
//

#include "Window/window.h"
#include "mygui.h"


int main(int argr, char **argv) {
    // Create a window
    GraphicsLearning::Window win;
    GraphicsLearning::MyGui gui;
    win.init(1280, 900);
    gui.initGui(win.window_);

    // render loop
    while (win.isClosed()) {


        // render gui
        gui.renderGui();
        // update the buffer
        win.updateWindow();
    }
    // destory the window.
    gui.destoryGui();
    win.destoryWindow();
    return 0;
}