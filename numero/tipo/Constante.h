//
// Created by Juan on 06/03/2021.
//

#pragma once


#include "../../Caracter.h"

class Constante : public Caracter {
private:
    float constante;
public:
    Constante(float constante_);

    float eval(const SymbolTab &syms) override;
};