//
// Autores: Juan Antonio Rodriguez Gracia y Miguel Beltran Pardos
// NIA: 805001 y 800616
//

#include <iostream>
#include "var.h"

var::var(string variable_): Caracter(3), variable(variable_){ }

float var::eval(const SymbolTab &syms) const{
    if (syms.find(variable) == syms.end()){
        std::cerr << " ERROR!!!" + to_String() + "no esta definida" << endl;
        exit(25);
    }

    return syms.find(variable)->second;
}

string var::to_String() const{
    return " " + variable + " ";
}