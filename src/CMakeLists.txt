cmake_minimum_required(VERSION 3.19)

project(clox C)

set(CMAKE_C_STANDARD 11)

set(SOURCE_CODE
        main.c
        chunk.c
        memory.c
        debug.c
        value.c
        vm.c
        object.c
        compiler.c
        scanner.c
        table.c)

add_executable(clox ${SOURCE_CODE})
