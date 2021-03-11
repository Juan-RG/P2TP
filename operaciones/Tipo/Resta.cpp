//
// Created by Juan on 06/03/2021.
//

#include "Resta.h"

float Resta::eval(const SymbolTab &syms) {

    return  (izq->eval(syms) - der->eval(syms));
}

Resta::Resta(Caracter* izq_, Caracter* der_) : Operador("-", izq_, der_){

}
