//
// Created by Juan on 06/03/2021.
//

#pragma once


#include "../Operador.h"

class Mult : public Operador  {
public:

    //Mult(string op);
    virtual float eval(const SymbolTab &syms) override;
};
