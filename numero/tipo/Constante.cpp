//
// Created by Juan on 06/03/2021.
//

#include "Constante.h"


Constante::Constante(float constante_): Caracter(3), constante(constante_){
}

float Constante::eval(const SymbolTab &syms) {

    return constante;
}

string Constante::to_String() {
    return std::to_string(constante);
}