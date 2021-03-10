#include "expression.h"
#include "operaciones/Operador.h"
#include "operaciones/Tipo/Suma.h"
#include <iostream>
#include <sstream>
#include <stack>

using namespace std;

Expression::Expression(const std::string &s) {
    parse(s);
}

void Expression::parse(const string &s) {
    istringstream ss(s);
    string tok;

    Operador *nodoRaiz;
    // Pila de términos
    // Consulta el tipo de datos 'stack' de la STL
    stack<Caracter> stk;

    while (ss >> tok) {
        if (tok == "+") {
            Caracter* a = new Suma("+");
            stk.push(a);
            // Apilar suma
            //...
        } else if (tok == "-") {
            // Apilar resta
            //...
        } else if (tok == "*") {
            // Apilar producto
            //...
        } else if (tok == "/") {
            // Apilar cociente
            //...
        } else {
            // Variable o constante
            // Si comienza por un caracter no numerico,
            // es un nombre de variable
            if (isalpha(tok[0])) {
                // Apilar variable
                //...
            } else {
                float f = stof(tok);
                // Apilar constante
                //...
            }
        }
    }

// Todo;	root = // cima de la pila
}

float Expression::eval(const SymbolTab &syms) const {
    // Devuelve el resultado de evaluar la expresion
}

string Expression::to_string() const {
    // Devuelve la cadena que representa la expresion
}

ostream &operator<<(ostream &os, const Expression &e) {
    os << e.to_string();

    return os;
}

