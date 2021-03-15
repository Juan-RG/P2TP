//
// Autores: Juan Antonio Rodriguez Gracia y Miguel Beltran Pardos
// NIA: 805001 y 800616
//

#pragma once

#include "Caracter.h"

class Constante : public Caracter {

private:

    float constante;

public:

    //Contructor de la clase:
    Constante(float constante_);
    //Devuelve el valor del atributo constante:
    float eval(const SymbolTab &syms) const override;
    //Devuelve la expresion del atributo asociada a la clase:
    string to_String() const override;

};