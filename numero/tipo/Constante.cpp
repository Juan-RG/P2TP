//
// Created by Juan on 06/03/2021.
//

#include "Constante.h"


Constante::Constante(float _constante): constante(_constante){
}

float Constante::eval(const SymbolTab &syms) {

    return constante;
}