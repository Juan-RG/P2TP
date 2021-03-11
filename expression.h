#pragma once

#include <iostream>
#include "symboltab.h"
#include "Caracter.h"
#include <stack>

class Expression
{
private:
	// Raiz del arbol de terminos
	Caracter* root;

	//O le metemos una pila comun aqui o ni idea de como se hace para hacer los toString:
    stack<Caracter*> stk;

	void parse(const std::string& s);

	std::string to_string() const;

public:
	// Cnstructores
	Expression(const std::string& s);

	float eval(const SymbolTab& syms) const;

	friend ostream& operator<<(ostream& os,const Expression& e);

    void obtenerHijos(Caracter **der, Caracter **izq);
};

ostream& operator<<(ostream& os,const Expression& e);
