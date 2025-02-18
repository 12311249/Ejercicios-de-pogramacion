cmake_minimum_required(VERSION 3.30)
project(Ejercicios_de_pogramacion)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ejercicios_de_pogramacion main.cpp
        Ejercicio2.cpp
        Ejercicio2.h)
add_executable(Ejercicio2 Ejercicio2.cpp)
add_executable(main.cpp main.cpp)
