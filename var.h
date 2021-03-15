//
// Autores: Juan Antonio Rodriguez Gracia y Miguel Beltran Pardos
// NIA: 805001 y 800616
//

#pragma once

#include "Caracter.h"

class var : public Caracter{

private:

    string variable;

public:

    //Contructor de la clase:
    var(string variable_);
    //Devuelve el valor asociado al atributo variable:
    float eval(const SymbolTab &syms) const override;
    //Devuelve la expresion del atributo asociada a la clase:
    string to_String() const override;

};
