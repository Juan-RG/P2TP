//
// Created by Juan on 06/03/2021.
//

#include "Mult.h"

float Mult::eval(const SymbolTab &syms) {

    return  (izq->eval(syms) * der->eval(syms));
}

Mult::Mult(Caracter* izq_, Caracter* der_) : Operador("*", izq_, der_){

}