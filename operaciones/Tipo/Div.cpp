//
// Created by Juan on 06/03/2021.
//

#include "Div.h"

float Div::eval(const SymbolTab &syms) {

    return  (izq->eval(syms)/der->eval(syms));
}

Div::Div(Caracter* izq_, Caracter* der_): Operador("/", izq_, der_){
    prioridad = 2;
}