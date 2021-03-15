cmake_minimum_required(VERSION 3.17)
project(codigo)

set(CMAKE_CXX_STANDARD 14)

add_executable(codigo main.cpp Caracter.cpp Caracter.h Operador.cpp Operador.h Suma.cpp Suma.h Resta.cpp Resta.h Div.cpp Div.h Mult.cpp Mult.h var.cpp var.h Constante.cpp Constante.h expression.cc expression.h symboltab.h)