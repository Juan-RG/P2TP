//
// Created by Juan on 06/03/2021.
//

#pragma Constante


#include "../../Caracter.h"

class Constante : Caracter {
private:
    float constante;
public:
    Constante(float constante);

    float eval(const SymbolTab &syms) override;
};