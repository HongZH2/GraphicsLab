cmake_minimum_required(VERSION 3.12)

project(Graphics_Learning)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(CMAKE_BUILD_TYPE "Debug")
set(GRAPHICS_LEARING_DIR ${CMAKE_CURRENT_SOURCE_DIR})


add_subdirectory(Utils)
add_subdirectory(template)
add_subdirectory(1.ObjectOutline)