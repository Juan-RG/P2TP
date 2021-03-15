//
// Autores: Juan Antonio Rodriguez Gracia y Miguel Beltran Pardos
// NIA: 805001 y 800616
//

#include "Caracter.h"

Caracter::Caracter(int prioridad_) : prioridad(prioridad_) { }

int Caracter::getPrioridad() const{
    return prioridad;
}

float Caracter::eval(const SymbolTab &syms) const{
    return 0;
}

/*string Caracter::to_String() const{
    return "";
}*/
