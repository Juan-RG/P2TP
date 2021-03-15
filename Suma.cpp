//
// Autores: Juan Antonio Rodriguez Gracia y Miguel Beltran Pardos
// NIA: 805001 y 800616
//

#include "Suma.h"

Suma::Suma(Caracter* izq_, Caracter* der_) : Operador(1,"+", izq_, der_){
}

float Suma::eval(const SymbolTab &syms) const{
    return  (izq->eval(syms) + der->eval(syms));
}