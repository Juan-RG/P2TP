//
// Created by Juan on 06/03/2021.
//

#include "Operador.h"



//TODO: operador necesita constructor????
Operador::Operador(string simbolo_, Caracter* izq_, Caracter* der_) : Caracter(2), simbolo(simbolo_), izq(izq_), der(der_) { }

string Operador::to_String() {  //TODO: es un string generalizado, vale para todas operaciones
    //Aqui habra que hacer un if para comprobar prioridad y ver si necesita parentesis o no:
    if(prioridad > izq->getPrioridad()){
        return "( "+izq->to_String() +" ) " + simbolo + der->to_String();
    } else{
        return izq->to_String() + simbolo + der->to_String();
    }


}
