cmake_minimum_required(VERSION 3.13)
project(ejercicio_04__utilidades_)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Debug)

add_executable(ejercicio_04__utilidades_
        Debug/codigo.obj
        codigo.cpp
        codigo.dfm
        codigo.h)
