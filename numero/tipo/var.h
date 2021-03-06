//
// Created by Juan on 06/03/2021.
//

#pragma var


#include "../Numero.h"

class var : Numero {
private:
    char varaible;
public:
    var(char variable);
    char getDato() const override;
};
