
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include "application.h"

void callback_error(int error, const char *description);
void callback_key(GLFWwindow *window, int key, int scancode, int action, int mods);