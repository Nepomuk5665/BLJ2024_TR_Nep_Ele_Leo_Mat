cmake_minimum_required(VERSION 3.29)
project(Geometrie C)

set(CMAKE_C_STANDARD 11)

add_executable(Geometrie main.c
        calc.c
        calc.h)
