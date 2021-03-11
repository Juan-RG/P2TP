//
// Created by Juan on 06/03/2021.
//

#pragma once

#include "symboltab.h"

class Caracter {    //TODO: yo creo que hay que meterle alguna variable o algo, porque sino nose como hacer pop()
                    //TODO: y diferenciar entre var y cte
private:
    int prioridad; //las + y - tendran = 1; las * y / tendran = 2; y las var =3 ??

public:

    Caracter(int priodad);
    virtual float eval(const SymbolTab& syms);
    virtual string to_String();
    int getPrioridad() const;
};



