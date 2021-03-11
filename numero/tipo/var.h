//
// Created by Juan on 06/03/2021.
//

#pragma once

#include "../../Caracter.h"

class var : public Caracter{
private:
    string variable;
public:
    var(string variable_);
    float eval(const SymbolTab &syms) override;
    string to_String() override;
};
