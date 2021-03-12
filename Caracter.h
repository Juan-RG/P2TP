//
// Created by Juan on 06/03/2021.
//

#pragma once

#include "symboltab.h"

class Caracter {

protected:

    int prioridad; //las + y - tendran = 1; las * y / tendran = 2

public:
    Caracter(int prioridad_);
    virtual float eval(const SymbolTab& syms) const; //toDo: ¿clase abstracta??
    virtual string to_String() const;
    int getPrioridad() const;

};



