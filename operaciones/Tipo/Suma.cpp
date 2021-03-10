//
// Created by Juan on 06/03/2021.
//

#include "Suma.h"

Suma::Suma(string op): Operador(op) {

}

float Suma::eval(const SymbolTab &syms) {

    return  (izq->eval(syms) + der->eval(syms));
}