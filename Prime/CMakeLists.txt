cmake_minimum_required(VERSION 3.10)

project(Prime VERSION 1.0)

add_executable(prime main.cpp is_prime.cpp)

target_include_directories(PUBLIC "${CMAKE_SOURCE_DIR}/")
