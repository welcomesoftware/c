cmake_minimum_required(VERSION 3.0)

project(ordenamientoburbuja LANGUAGES C)

add_executable(ordenamientoburbuja main.c)

install(TARGETS ordenamientoburbuja RUNTIME DESTINATION bin)
