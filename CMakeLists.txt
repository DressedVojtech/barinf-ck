cmake_minimum_required (VERSION 3.11)

project ( brainfuck_compiler CXX )

set (CMAKE_CXX_STANDARD 20)

if (NOT CMAKE_BUILD_TYPE)
    set (CMAKE_BUILD_TYPE "Release")
    message (STATUS "Build type not specified: Use Release by default")
endif (NOT CMAKE_BUILD_TYPE)

# executable
add_executable (brainfuck_compiler main.cpp)
#target_include_directories(brainfuck_compiler src)
