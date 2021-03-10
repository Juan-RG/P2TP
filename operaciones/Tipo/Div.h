//
// Created by Juan on 06/03/2021.
//

#pragma Div

#include "../Operador.h"

class Div : public Operador {
public:
    virtual float eval(const SymbolTab &syms) override;
};



