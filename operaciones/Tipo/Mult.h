//
// Created by Juan on 06/03/2021.
//

#pragma once


#include "../Operador.h"

class Mult : Operador  {
public:
    virtual float eval(const SymbolTab &syms) override;
};
