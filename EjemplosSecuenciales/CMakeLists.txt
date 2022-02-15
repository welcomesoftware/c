cmake_minimum_required(VERSION 3.0)

project(ejemplossecuenciales LANGUAGES C)

add_executable(ejemplossecuenciales main.c)

install(TARGETS ejemplossecuenciales RUNTIME DESTINATION bin)
