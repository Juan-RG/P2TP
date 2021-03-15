//
// Autores: Juan Antonio Rodriguez Gracia y Miguel Beltran Pardos
// NIA: 805001 y 800616
//

#pragma once

#include "Caracter.h"

class Operador : public Caracter {   //Clase que desciende de caracter

protected:

    string simbolo; //Cada operador tendra un simbolo distinto
    //Atributos que va a usar la operacion para calcular un resultado:
    Caracter* izq;
    Caracter* der;

public:

    //Constructor de la clase operacion:
    Operador(int prioridad, string simbolo_, Caracter* izq_, Caracter* der_);
    //Devuelve la representacion textual de la expresion en la notacion habitual (infija):
    string to_String() const override;

};



