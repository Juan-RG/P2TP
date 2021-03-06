//
// Created by Juan on 06/03/2021.
//

#pragma Constante


#include "../Numero.h"

class Constante : Numero {
private:
    float varaible;
public:
    Constante(float variable);
    float getDato() const override;
};