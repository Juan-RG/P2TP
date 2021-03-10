//
// Created by Juan on 06/03/2021.
//

#include "Operador.h"

Operador::Operador(string op) : simbolo(op){
}

void Operador::setDer(Caracter *CD) {
    der = CD;
}

void Operador::setIzq(Caracter *CI) {
    izq = CI;
}