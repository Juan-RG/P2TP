//
// Created by Juan on 06/03/2021.
//

#pragma Suma


#include "../Operador.h"

class Suma : Operador {
public:
    virtual float eval(const SymbolTab &syms) override;
};



