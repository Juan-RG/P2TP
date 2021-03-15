//
// Autores: Juan Antonio Rodriguez Gracia y Miguel Beltran Pardos
// NIA: 805001 y 800616
//

#pragma once

#include <iostream>
#include "symboltab.h"
#include "Caracter.h"
#include <stack>

class Expression{

private:
	// Raiz del arbol de terminos
	Caracter* root;

	//Pila donde se guardaran las operaciones con sus respectivos operandos:
    stack<Caracter*> stk;

    //Metodo encargado de construir adecuadamente la pila:
	void parse(const std::string& s);


	std::string to_string() const;

	//Metodo auxiliar que guarda los operandos en cada operacion de la pila:
    void asignarHijos(Caracter **der, Caracter **izq);

public:
	// Constructores
	Expression(const std::string& s);

	//Delvuelve el resultado de operar la expresion correspondiente:
	float eval(const SymbolTab& syms) const;

    //Metodo que redefine el operador <<:
	friend ostream& operator<<(ostream& os,const Expression& e);

};

ostream& operator<<(ostream& os,const Expression& e);
