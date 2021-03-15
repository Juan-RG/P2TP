//
// Autores: Juan Antonio Rodriguez Gracia y Miguel Beltran Pardos
// NIA: 805001 y 800616
//

#include "Constante.h"

Constante::Constante(float constante_): Caracter(3),  constante(constante_){ }

float Constante::eval(const SymbolTab &syms) const{
    return constante;
}

string Constante::to_String() const{
    return " " + std::to_string(constante) + " ";
}