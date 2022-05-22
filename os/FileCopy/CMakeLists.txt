# Top Level CMakeLists.txt
cmake_minimum_required(VERSION 3.18)

project(FileCopy VERSION 1.0)

add_executable(copy ${CMAKE_CURRENT_SOURCE_DIR}/src/main.c)
