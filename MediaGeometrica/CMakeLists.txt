cmake_minimum_required(VERSION 3.17)
project(MediaGeometrica C)

set(CMAKE_C_STANDARD 11)

add_executable(MediaGeometrica main.c)
target_link_libraries(MediaGeometrica m)