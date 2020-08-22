cmake_minimum_required(VERSION 3.0)
project(a)
#add_definitions("-Wall -std=c++14")


# set(CMAKE_CXX_STANDARD 14)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_EXTENSIONS OFF)
# # ... Define targets, etc. as usual
(STATUS $<CONFIG>)

add_executable(a main.cpp)
target_compile_features(a PRIVATE cxx_std_14)

#[==[
CMake's Organizaiton
    1. Directories that contain a CMakeLists.txt are the 
    Entry point for the build system generater. Subdirectories may be
    added with add_subdirectory() and must contain a CMakeLists.txt too.
    2. Scripts are <scripts>.cmake files that can be executed with 
    "cmake -P <script>.cmake".  Not all command are supported.
    3. Modules are <script>.cmake files located in the CMAKE_MODULE_PATH
    Modules can be loaded with the include() command.

target_compile_definitions(foo PRIVATE
    "VERBOSITY=$<IF:$<CONFIG:Debug>, 30, 10>"
)
    Generator expressions use the $<> syntax.
    Not evaluated by command interpreter.
    It is just a string with $<>.
    Evaluated during build system generation.
    Not supported install commands (obviously).

Custom command : Function or Macro

function(my_command input output)
    # ...
    set(${output} ... PARENT_SCOPE)
endfunction()
my_command(foo bar)

    ${output} is "bar" and bar is defined in Parent scope.
    1. Variables are scoped to the function,unless set with PARENT_SCOPE
    2. Availble variables: input, output, ARGC, ARGV, ARGN, ARG0, ARG1, ARG2, ...
    3. ${output} 'expands to' bar.

macro(my_command input output)
    # ...
endmacro()
my_command(foo bar)

    1. No extra scope.
    2. Text replacements: ${input}, ${output}, ${ARGC}, ...
    3. ${output} is 'replaced with' bar
#]==]


