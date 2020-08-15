cmake_minimum_required(VERSION 3.0)
project(a)
#add_definitions("-Wall -std=c++14")


# set(CMAKE_CXX_STANDARD 14)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_EXTENSIONS OFF)
# # ... Define targets, etc. as usual


add_executable(a main.cpp)
target_compile_features(a PRIVATE cxx_std_14)