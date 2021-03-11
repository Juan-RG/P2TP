//
// Created by Juan on 06/03/2021.
//

#include "Mult.h"

Mult::Mult(Caracter* izq_, Caracter* der_) : Operador("*", izq_, der_){
    prioridad = 2;
}

float Mult::eval(const SymbolTab &syms) const{
    return  (izq->eval(syms) * der->eval(syms));
}