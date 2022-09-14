cmake_minimum_required(VERSION 3.18)

project(MaxSubArray VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)

add_executable(subarr "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/MaxSubArray.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/MaxSubArray.hpp")