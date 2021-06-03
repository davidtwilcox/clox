# cmake_minimum_required(VERSION <specify CMake version here>)
project(clox C)

set(CMAKE_C_STANDARD 11)

set(SOURCE_CODE
        main.c
        chunk.c memory.c debug.c value.c)

add_executable(clox ${SOURCE_CODE})
