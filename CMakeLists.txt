cmake_minimum_required(VERSION 3.30)
project(Ejercicios_de_pogramacion)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ejercicios_de_pogramacion main.cpp
        Ejercicio2.cpp
        NumeroMayor.cpp
        YEAR.cpp
        VOCAL.cpp
        PRIMO.cpp
        NACIMIENTO.cpp
        MULTIPLOS.cpp
        NOTAS.cpp
        PRECIOS.cpp
        ORDEN.cpp
)
add_executable(Ejercicio2 Ejercicio2.cpp)
add_executable(main.cpp main.cpp)
add_executable(NumeroMayor NumeroMayor.cpp)
add_executable(YEAR YEAR.cpp)
add_executable(VOCAL VOCAL.cpp)
add_executable(PRIMO PRIMO.cpp)
add_executable(NACIMIENTO NACIMIENTO.cpp)
add_executable(MULTIPLOS MULTIPLOS.cpp)
add_executable(NOTAS NOTAS.cpp)
add_executable(PRECIOS PRECIOS.cpp)
add_executable(ORDEN ORDEN.cpp)

