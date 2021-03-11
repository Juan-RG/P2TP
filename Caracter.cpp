//
// Created by Juan on 06/03/2021.
//

#include "Caracter.h"

Caracter::Caracter(int prioridad_) : prioridad(prioridad_) { }

int Caracter::getPrioridad() const{
    return prioridad;
}

float Caracter::eval(const SymbolTab &syms) const{
    return 0;
}

string Caracter::to_String() const{
    return std::__cxx11::string();
}
