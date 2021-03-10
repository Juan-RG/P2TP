//
// Created by Juan on 06/03/2021.
//

#pragma once

//#include "../Caracter.h"  toDo: Preguntar por que da error


#include "../Caracter.h"

class Operador : public Caracter {

protected:
    string simbolo;
    Caracter* der;
    Caracter* izq;
public:

    Operador(string op);
    //virtual float eval(const SymbolTab &syms) override;

    void setDer(Caracter* CD);
    void setIzq(Caracter* CI);

};



