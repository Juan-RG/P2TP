//
// Created by Juan on 06/03/2021.
//

#pragma Suma


#include "../Operador.h"

class Suma : public Operador {
public:
    Suma(string op);
    virtual float eval(const SymbolTab &syms) override;
};



