//
// Created by Juan on 06/03/2021.
//

#include <iostream>
#include "var.h"

var::var(string variable_): Caracter(3), variable(variable_){ }

float var::eval(const SymbolTab &syms) const{
    if (syms.find(variable) == syms.end()){
        std::cerr << " ERROR!!!" +to_String() + "no esta definida";
        exit(0);
    }

    return syms.find(variable)->second;
}

string var::to_String() const{
    return " " + variable + " ";
}