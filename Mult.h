//
// Autores: Juan Antonio Rodriguez Gracia y Miguel Beltran Pardos
// NIA: 805001 y 800616
//

#pragma once

#include "Operador.h"

class Mult : public Operador  {   //Clase que desciende de operador

public:

    //Constructor de la clase:
    Mult(Caracter* izq_, Caracter* der_);
    //Metodo redefinido que evalua (multiplica) la expresion, devolviendo un numero real:
    virtual float eval(const SymbolTab &syms) const override;

};
