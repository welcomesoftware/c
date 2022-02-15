cmake_minimum_required(VERSION 3.0)

project(insertionsort LANGUAGES C)

add_executable(insertionsort main.c)

install(TARGETS insertionsort RUNTIME DESTINATION bin)
