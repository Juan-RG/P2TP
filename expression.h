#pragma Expression

#include <iostream>
#include "symboltab.h"

class Expression
{
private:
	// Raiz del arbol de terminos
	//???? root;

	void	parse(const std::string& s);

	std::string to_string() const;

public:
	// Cnstructores
	//....

	float	eval(const SymbolTab& syms) const;

	friend ostream& operator<<(ostream& os,const Expression& e);
};

ostream& operator<<(ostream& os,const Expression& e);
