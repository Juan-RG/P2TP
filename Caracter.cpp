//
// Created by Juan on 06/03/2021.
//

#include "Caracter.h"

int Caracter::getPrioridad() const{
    return prioridad;
}

float Caracter::eval(const SymbolTab &syms) {
    return 0;
}

string Caracter::to_String() {

    return std::__cxx11::string();
}
Caracter::Caracter(int priodad) : prioridad(priodad) {

}