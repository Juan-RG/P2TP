#pragma once

#include <iostream>
#include "symboltab.h"
#include "Caracter.h"
#include <stack>

class Expression
{
private:
	// Raiz del arbol de terminos
	//???? root;

	//O le metemos una pila comun aqui o ni idea de como se hace para hacer los toString:
    stack<Caracter> stk;

	void parse(const std::string& s);

	std::string to_string() const;

public:
	// Cnstructores
	//....
	Expression(const std::string& s);

   // stack<Caracter> getPila() const;

	float eval(const SymbolTab& syms) const;

	friend ostream& operator<<(ostream& os,const Expression& e);
};

ostream& operator<<(ostream& os,const Expression& e);
