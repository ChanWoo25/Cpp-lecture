cmake_minimum_required(VERSION 3.12)
project(main
LANGUAGES C)

add_executable(main main.c)
set_target_properties(main PROPERTIES
RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}
)