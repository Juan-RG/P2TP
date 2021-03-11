//
// Created by Juan on 06/03/2021.
//

#pragma once

#include "../Operador.h"

class Div : public Operador {
public:

    Div(Caracter* izq_, Caracter* der_);
    virtual float eval(const SymbolTab &syms) override;
};



