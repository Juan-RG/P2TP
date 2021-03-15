//
// Autores: Juan Antonio Rodriguez Gracia y Miguel Beltran Pardos
// NIA: 805001 y 800616
//

#include "Resta.h"

float Resta::eval(const SymbolTab &syms) const{
    return  (izq->eval(syms) - der->eval(syms));
}

Resta::Resta(Caracter* izq_, Caracter* der_) : Operador(1,"-", izq_, der_){
}
