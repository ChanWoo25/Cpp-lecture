cmake_minimum_required(VERSION 3.0)
project(ch4)

include_directories(${CMAKE_SOURCE_DIR})
add_library(H src.cpp)
add_executable(ch4 main.cpp)
target_link_libraries(ch4 H)