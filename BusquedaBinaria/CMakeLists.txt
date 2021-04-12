cmake_minimum_required(VERSION 3.0)

project(busquedabinaria LANGUAGES C)

add_executable(busquedabinaria main.c)

install(TARGETS busquedabinaria RUNTIME DESTINATION bin)
