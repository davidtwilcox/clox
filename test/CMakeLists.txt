cmake_minimum_required(VERSION 3.19)

project(testclox C)

set(CMAKE_C_STANDARD 11)

set(SOURCE_CODE
        testmain.c
        ../3rdparty/unity/unity.c)

add_executable(testclox ${SOURCE_CODE})

target_include_directories(testclox PUBLIC
        ../3rdparty/unity)
