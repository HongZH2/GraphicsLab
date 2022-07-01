cmake_minimum_required(VERSION 3.12)

project(Utils)

set(Utils_Dir ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(
        ${GRAPHICS_LEARING_DIR}
        ${GRAPHICS_LEARING_DIR}/ThirdParties/
        ${GRAPHICS_LEARING_DIR}/ThirdParties/imgui/
        ${GRAPHICS_LEARING_DIR}/ThirdParties/imgui/backends
        ${GRAPHICS_LEARING_DIR}/ThirdParties/assimp
        ${GRAPHICS_LEARING_DIR}/ThirdParties/AliceRender
        ${GRAPHICS_LEARING_DIR}/ThirdParties/glfw3/include/
)

file(GLOB_RECURSE Utils_Src
        ${Utils_Dir}/*.cpp)

file(GLOB IMGUI_SRC ${GRAPHICS_LEARING_DIR}/ThirdParties/imgui/*.cpp
        ${GRAPHICS_LEARING_DIR}/ThirdParties/imgui/backends/imgui_impl_opengl3.*
        ${GRAPHICS_LEARING_DIR}/ThirdParties/imgui/backends/imgui_impl_glfw.*)

add_library(
    ${PROJECT_NAME}
    ${Utils_Src}
    ${IMGUI_SRC}
)

target_link_libraries(
    ${PROJECT_NAME}
    ${GRAPHICS_LEARING_DIR}/ThirdParties/glfw3/lib/libglfw3.a
)

message(STATUS "Utils Done")