cmake_minimum_required(VERSION 3.29)
project(Life_Science C)

set(CMAKE_C_STANDARD 11)

add_executable(Life_Science main.c
        calc.c
        calc.h)
