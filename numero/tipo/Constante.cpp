//
// Created by Juan on 06/03/2021.
//

#include "Constante.h"


Constante::Constante(float constante_): constante(constante_){
}

float Constante::eval(const SymbolTab &syms) {

    return constante;
}