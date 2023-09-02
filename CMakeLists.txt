cmake_minimum_required(VERSION 3.24)
project(my-first-c-program C)

set(CMAKE_C_STANDARD 11)

add_executable(my-first-c-program main.c)

target_link_libraries(my-first-c-program m)
