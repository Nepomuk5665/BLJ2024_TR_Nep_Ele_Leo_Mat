cmake_minimum_required(VERSION 3.29)
project(calc C)

set(CMAKE_C_STANDARD 11)

add_executable(calc main.c
        calc.c
        calc.h)
