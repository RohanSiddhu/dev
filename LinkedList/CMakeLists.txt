cmake_minimum_required(VERSION 3.10)

project(LinkedList VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_C_STANDARD 11)

add_library(list src/list.cxx)

configure_file(Config.h.in Config.h)

target_include_directories(list PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/include")
