cmake_minimum_required(VERSION 3.29)
project(Fakutaet C)

set(CMAKE_C_STANDARD 11)

add_executable(Fakutaet main.c
        calc.c
        calc.h)
