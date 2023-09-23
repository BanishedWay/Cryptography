cmake_minimum_required(VERSION 3.10)
project(gcd_example)

set(CMAKE_CXX_STANDARD 11)

add_executable(gcd_example main.cpp algorithm.cpp algorithm.h)