#include "../include/callback.h"

#include <stdio.h>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include "../include/application.h"
#include "../test/include/main.h"

void callback_error(int error, const char *description)
{
    fprintf(stderr, "Error: %s\n", description);
}

void callback_key(GLFWwindow *window, int key, int scancode, int action, int mods)
{
    if (action == GLFW_PRESS)
    {
        if (App.state == ApplicationStateMenu)
        {
            switch (key)
            {
            case GLFW_KEY_ESCAPE:
                glfwSetWindowShouldClose(window, GLFW_TRUE);
                break;
            case GLFW_KEY_0:
                App.state = ApplicationStateProgram;
                test_main(window);
                break;
            case GLFW_KEY_1:
                App.state = ApplicationStateProgram;
                test_main(window);
                break;
            }
        }
    }
    else
    {
        switch (key)
        {
        case GLFW_KEY_ESCAPE:
            App.state = ApplicationStateMenu;
            glfwSetWindowShouldClose(window, GLFW_TRUE);
            break;
        }
    }
}
