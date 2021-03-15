//
// Autores: Juan Antonio Rodriguez Gracia y Miguel Beltran Pardos
// NIA: 805001 y 800616
//

#pragma once

#include "symboltab.h"

class Caracter {   //Clase base

protected:

    int prioridad; //las + y - tendran = 1; las * y / tendran = 2; las ctes y var tendran = 3

public:

    //Constructor de la clase base:
    Caracter(int prioridad_);
    //Metodo sin definir que devuelve el valor del caracter: (se define comportamiento en clases hijas)
    virtual float eval(const SymbolTab& syms) const;
    //Metodo abstracto puro que devolvera un caracter dependiendo de la clase hija:
    virtual string to_String() const = 0;
    //Devuelve el atributo prioridad:
    int getPrioridad() const;

};



