//
// Created by Juan on 06/03/2021.
//

#include "Suma.h"

Suma::Suma(Caracter* izq_, Caracter* der_) : Operador(1,"+", izq_, der_){
}

float Suma::eval(const SymbolTab &syms) const{
    return  (izq->eval(syms) + der->eval(syms));
}