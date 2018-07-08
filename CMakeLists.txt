cmake_minimum_required(VERSION 3.0)
project(ReadyToRumble)

set(SOURCES src/Main.cpp)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR} include)
add_executable(ReadyToRumble ${SOURCES})