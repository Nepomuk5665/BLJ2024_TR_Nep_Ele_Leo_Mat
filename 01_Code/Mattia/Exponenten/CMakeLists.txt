cmake_minimum_required(VERSION 3.29)
project(Exponenten C)

set(CMAKE_C_STANDARD 11)

add_executable(Exponenten main.c
        calc.c
        calc.h)
