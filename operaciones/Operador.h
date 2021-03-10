//
// Created by Juan on 06/03/2021.
//

#pragma Operador

//#include "../Caracter.h"  toDo: Preguntar por que da error

#include "../Caracter.h"

class Operador : public Caracter {

protected:
    char simbolo;
    Caracter* der;
    Caracter* izq;
public:


    virtual float eval(const SymbolTab &syms) override;

};



