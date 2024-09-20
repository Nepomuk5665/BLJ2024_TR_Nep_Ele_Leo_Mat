cmake_minimum_required(VERSION 3.29)
project(Multiplizieren_Dividieren C)

set(CMAKE_C_STANDARD 11)

add_executable(Multiplizieren_Dividieren main.c
        calc.c
        calc.h)
