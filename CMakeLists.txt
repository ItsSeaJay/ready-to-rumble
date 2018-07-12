cmake_minimum_required(VERSION 3.0)

project(ReadyToRumble)

find_package(SDL2 REQUIRED)
find_file(SDL2_INCLUDE_DIR NAME SDL.h HINTS SDL2)
include_directories(ReadyToRumble ${SDL2_INCLUDE_DIR})

add_executable(ReadyToRumble src/Main.cpp)
target_link_libraries(ReadyToRumble ${SDL2_LIBRARY})