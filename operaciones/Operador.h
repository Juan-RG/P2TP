//
// Created by Juan on 06/03/2021.
//

#pragma once

//#include "../Caracter.h"  toDo: Preguntar por que da error

#include "../Caracter.h"

class Operador : public Caracter {

protected:

    string simbolo;
    Caracter* izq;
    Caracter* der;

public:

    Operador(string simbolo_, Caracter* izq_, Caracter* der_);
    //virtual float eval(const SymbolTab &syms) override; //TODO: hace falta???
    string to_String() override;

};



