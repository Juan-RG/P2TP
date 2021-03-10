cmake_minimum_required(VERSION 3.17)
project(codigo)

set(CMAKE_CXX_STANDARD 14)

add_executable(codigo main.cpp Caracter.cpp Caracter.h operaciones/Operador.cpp operaciones/Operador.h operaciones/Tipo/Suma.cpp operaciones/Tipo/Suma.h operaciones/Tipo/Resta.cpp operaciones/Tipo/Resta.h operaciones/Tipo/Div.cpp operaciones/Tipo/Div.h operaciones/Tipo/Mult.cpp operaciones/Tipo/Mult.h numero/tipo/var.cpp numero/tipo/var.h numero/tipo/Constante.cpp numero/tipo/Constante.h  expression.cc expression.h symboltab.h)