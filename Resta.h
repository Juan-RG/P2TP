//
// Created by Juan on 06/03/2021.
//

#pragma once

#include "Operador.h"

class Resta : public Operador {

public:

    Resta(Caracter* izq_, Caracter* der_);
    virtual float eval(const SymbolTab &syms) const override;

};


