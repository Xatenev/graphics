cmake_minimum_required(VERSION 3.10)

project(graphics)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

include_directories(vendor/include)


file(GLOB_RECURSE GRAPHICS_SRC CONFIGURE_DEPENDS "src/*.h" "src/*.c")
add_executable(graphics ${GRAPHICS_SRC})

add_library(gl3w vendor/gl3w/src/gl3w.c)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(vendor/glfw3)

if(UNIX)
    target_link_libraries(graphics m)
    target_link_libraries(gl3w dl)
endif(UNIX)
target_link_libraries(graphics glfw)
target_link_libraries(graphics gl3w)
