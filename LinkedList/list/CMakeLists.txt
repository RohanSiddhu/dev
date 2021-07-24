cmake_minimum_required(VERSION 3.8)

project(LinkedList VERSION 1.0)

add_library(list src/list.c)

target_include_directories(list PUBLIC "${PROJECT_SOURCE_DIR}/include")
