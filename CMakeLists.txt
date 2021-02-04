cmake_minimum_required(VERSION 3.10)

project(graphics)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

include_directories(vendor/include)

add_library(gl3w vendor/src/gl3w.c)
add_executable(graphics src/graphics.c)

find_package(glfw3 3.3 REQUIRED)
find_package(glfw3 3.3 REQUIRED)


target_link_libraries(graphics m)
target_link_libraries(gl3w dl)
target_link_libraries(graphics glfw)
target_link_libraries(graphics gl3w)
