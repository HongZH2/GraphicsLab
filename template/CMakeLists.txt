cmake_minimum_required(VERSION 3.12)
project(Template)
set(Template_DIR ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(
    ${GRAPHICS_LEARING_DIR}/Utils/
    ${GRAPHICS_LEARING_DIR}/ThirdParties/
    ${GRAPHICS_LEARING_DIR}/ThirdParties/imgui
    ${GRAPHICS_LEARING_DIR}/ThirdParties/assimp
    ${GRAPHICS_LEARING_DIR}/ThirdParties/AliceRender
    ${GRAPHICS_LEARING_DIR}/ThirdParties/glfw3/include/
)

file(GLOB Template_Src ${Template_DIR}/*)

add_executable(${PROJECT_NAME} ${Template_Src})

find_library(OPENGL_LIBRARY OpenGL REQUIRED)
find_library(COCOA_LIBRARY Cocoa REQUIRED)
find_library(IOKIT_LIBRARY IOKit REQUIRED)
find_library(COREVID_LIBRARY CoreVideo REQUIRED)

target_link_libraries(
        ${PROJECT_NAME}
        ${OPENGL_LIBRARY}
        ${COCOA_LIBRARY}
        ${IOKIT_LIBRARY}
        ${COREVID_LIBRARY}
        ${GRAPHICS_LEARING_DIR}/ThirdParties/glfw3/lib/libglfw3.a
        Utils
)