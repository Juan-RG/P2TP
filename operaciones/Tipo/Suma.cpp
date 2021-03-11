//
// Created by Juan on 06/03/2021.
//

#include "Suma.h"


/*Suma::Suma(string op) : Operador(op){

}*/

Suma::Suma(Caracter* izq_, Caracter* der_) : Operador("+", izq_, der_){ }

float Suma::eval(const SymbolTab &syms) {

    return  (izq->eval(syms) + der->eval(syms));
}