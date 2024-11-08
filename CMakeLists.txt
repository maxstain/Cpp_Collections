cmake_minimum_required(VERSION 3.24)
project(Collections)

set(CMAKE_CXX_STANDARD 17)

add_executable(Collections main.cpp Functions/array.h Functions/vector.h Functions/list.h Functions/map.h)