cmake_minimum_required(VERSION 3.29)
project(combined C)

set(CMAKE_C_STANDARD 11)

add_executable(combined main.c
        calc.c
        calc.h)
