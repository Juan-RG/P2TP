//
// Created by Juan on 06/03/2021.
//

#pragma once


#include "../Operador.h"

class Resta : Operador {
public:
    virtual float eval(const SymbolTab &syms) override;
};


