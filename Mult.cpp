//
// Autores: Juan Antonio Rodriguez Gracia y Miguel Beltran Pardos
// NIA: 805001 y 800616
//

#include "Mult.h"

Mult::Mult(Caracter* izq_, Caracter* der_) : Operador(2,  "*", izq_, der_){
}

float Mult::eval(const SymbolTab &syms) const{
    return  (izq->eval(syms) * der->eval(syms));
}