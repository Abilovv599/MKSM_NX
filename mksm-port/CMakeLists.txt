cmake_minimum_required(VERSION 3.20)
project(mksm_recomp C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
add_compile_definitions(WIN32_LEAN_AND_MEAN NOMINMAX)

set(XBOXRECOMP_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../xboxrecomp" CACHE PATH "xboxrecomp toolkit")
set(MKSM_GEN_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../gen" CACHE PATH "tools.recomp output")
if(NOT EXISTS "${MKSM_GEN_DIR}/recomp_funcs.h")
    message(FATAL_ERROR "No generated code in ${MKSM_GEN_DIR}")
endif()

option(MKSM_VULKAN "Render with Vulkan instead of OpenGL" OFF)
set(XBOXRECOMP_VULKAN ${MKSM_VULKAN} CACHE BOOL "" FORCE)
add_subdirectory(${XBOXRECOMP_DIR} ${CMAKE_BINARY_DIR}/xboxrecomp)

file(GLOB RECOMP_GEN_SOURCES CONFIGURE_DEPENDS "${MKSM_GEN_DIR}/*.c")
set(GAME_SOURCES src/main.c src/recomp_manual.c)
if(APPLE)
    list(APPEND GAME_SOURCES src/host_mac.c)
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(MKSM_SDL2 REQUIRED sdl2)
endif()
add_executable(${PROJECT_NAME} ${GAME_SOURCES} ${RECOMP_GEN_SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE xboxrecomp m)
if(MKSM_VULKAN)
    target_compile_definitions(${PROJECT_NAME} PRIVATE MKSM_VULKAN=1)
endif()
target_include_directories(${PROJECT_NAME} PRIVATE
    ${MKSM_SDL2_INCLUDE_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}/src ${MKSM_GEN_DIR} ${XBOXRECOMP_DIR}/include)

set(MKSM_GEN_OPT "-O1" CACHE STRING "Optimisation for the lifted code")
set_source_files_properties(${RECOMP_GEN_SOURCES} PROPERTIES
    COMPILE_OPTIONS "${MKSM_GEN_OPT};-w;-fno-strict-aliasing;-fwrapv")
