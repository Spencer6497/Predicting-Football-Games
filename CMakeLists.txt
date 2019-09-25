cmake_minimum_required(VERSION 3.14)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled cmake-build-debug/Project2.c cmake-build-debug/proj2head.h cmake-build-debug/computation.c cmake-build-debug/fileIO.c)