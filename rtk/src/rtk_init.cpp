//
// Created by fatih on 19.03.2017.
//

#include <rtk/rtk_init.hpp>
#include <GLFW/glfw3.h>
#include <glad/glad.h>
#include <stdexcept>

namespace rtk
{
    int rtk_init::init_count = 0;

    rtk_init::rtk_init() {
        if (init_count == 0)
        {
            ::glfwInit();
        }
        ++init_count;
    }

    rtk_init::~rtk_init() {
        if (init_count == 1)
        {
            ::glfwTerminate();
        }
        --init_count;
    }
}