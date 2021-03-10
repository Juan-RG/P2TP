//
// Created by Juan on 06/03/2021.
//

#include "var.h"

var::var(string variable_): variable(variable_){}

float var::eval(const SymbolTab &syms) {
    return syms.find(variable)->second;
}
