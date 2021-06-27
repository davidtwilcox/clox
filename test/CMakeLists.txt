cmake_minimum_required(VERSION 3.19)

project(testclox C)

set(CMAKE_C_STANDARD 11)

set (CODE_UNDER_TEST
        ../src/chunk.c
        ../src/compiler.c
        ../src/debug.c
        ../src/memory.c
        ../src/object.c
        ../src/scanner.c
        ../src/table.c
        ../src/value.c
        ../src/vm.c)

set(SOURCE_CODE
        ${CODE_UNDER_TEST}
        ../3rdparty/unity/unity.c
        main.c
        testchunk.c)

add_executable(testclox ${CODE_UNDER_TEST} ${SOURCE_CODE})

target_include_directories(testclox PUBLIC
        ../3rdparty/unity)

target_link_directories(testclox PUBLIC
        ../cmake-build-debug)
