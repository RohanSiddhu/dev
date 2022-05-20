# Top level CMakeList.txt

cmake_minimum_required(VERSION 3.18)

project(Naive VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
add_executable(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)

enable_testing()
add_test(NAME Run COMMAND ${PROJECT_NAME})