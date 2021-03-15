//
// Created by Juan on 06/03/2021.
//

#include "Operador.h"

Operador::Operador(int prioridad, string simbolo_, Caracter* izq_, Caracter* der_) : Caracter(prioridad),
                    simbolo(simbolo_), izq(izq_), der(der_) { }

string Operador::to_String() const{

    if(prioridad > izq->getPrioridad()){
        return "(" + izq->to_String() + ") " + simbolo + der->to_String();
    } else if (prioridad > der->getPrioridad()){
        return izq->to_String() + simbolo + " " + "(" + der->to_String() + ") " ;
    } else{
        return izq->to_String() + simbolo + der->to_String();
    }

}
