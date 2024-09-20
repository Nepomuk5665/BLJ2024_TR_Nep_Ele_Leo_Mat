cmake_minimum_required(VERSION 3.29)
project(Wurzeln C)

set(CMAKE_C_STANDARD 11)

add_executable(Wurzeln main.c
        calc.c
        calc.h)
