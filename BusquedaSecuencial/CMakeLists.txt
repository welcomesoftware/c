cmake_minimum_required(VERSION 3.0)

project(busquedasecuencial LANGUAGES C)

add_executable(busquedasecuencial main.c)

install(TARGETS busquedasecuencial RUNTIME DESTINATION bin)
