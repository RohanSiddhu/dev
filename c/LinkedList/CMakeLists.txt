cmake_minimum_required(VERSION 3.8)

project(Test VERSION 1.0)

set(CMAKE_C_STANDARD 11)

add_subdirectory(list)
add_executable(test src/main.c)

option(USE_CONFIG "Use cmake provided configuration file." ON)
if(USE_CONFIG)
    configure_file(Config.h.in Config.h)
endif()

target_link_libraries(test PUBLIC list)

target_include_directories(test PUBLIC "${PROJECT_BINARY_DIR}"
                            "${PROJECT_SOURCE_DIR}/include"
                            "${PROJECT_SOURCE_DIR}/list/include")
