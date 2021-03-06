//
// Created by Juan on 06/03/2021.
//

#pragma Operador

//#include "../Caracter.h"  toDo: Preguntar por que da error
#include "../numero/Numero.h"

class Operador : Caracter {
private:
    char simbolo;
public:
    Operador(char simbolo);
    virtual float operacion(float n1, float n2); //cada clase hija implementara la operacion.

};



