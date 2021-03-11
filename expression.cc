#include "expression.h"
#include "operaciones/Tipo/Suma.h"
#include "operaciones/Tipo/Resta.h"
#include "operaciones/Tipo/Div.h"
#include "operaciones/Tipo/Mult.h"
#include "operaciones/Operador.h"

#include "numero/tipo/Constante.h"
#include "numero/tipo/var.h"

#include <iostream>
#include <sstream>
//#include <stack>

using namespace std;

Expression::Expression(const std::string &s) {
    //parse(s);
}

/*stack<Caracter> Expression::getPila() const {
    return stk;
}*/

void Expression::parse(const string &s) {
    istringstream ss(s);
    string tok;

    //Operador *nodoRaiz;
    // Pila de términos
    // Consulta el tipo de datos 'stack' de la STL
    //stack<Caracter> stk;
    //stk = getPila();
    //stk = this->stk;


    while (ss >> tok) {
        if (tok == "+") { //TODO: hay que desapilar dos datos de la pila, para pasarlos como nodos hijos
            // Apilar suma
            Caracter* c1 = new Caracter(stk.top());
            Caracter* c2 = new Caracter(stk.top());
            Suma suma(c1,c2);
            stk.push(suma);
        } else if (tok == "-") {
            // Apilar resta
            /*Resta resta(tok);
            stk.push(resta);*/
        } else if (tok == "*") {
            // Apilar producto
            /*Mult mult(tok);
            stk.push(mult);*/
        } else if (tok == "/") {
            // Apilar cociente
            /*Div div(tok);
            stk.push(div);*/
        } else {
            // Variable o constante
            // Si comienza por un caracter no numerico,
            // es un nombre de variable
            if (isalpha(tok[0])) {
                // Apilar variable
                var variable(tok);
                stk.push(variable);
            } else {
                float f = stof(tok);
                // Apilar constante
                Constante cte(f);
                stk.push(cte);
            }
        }
    }

// Todo;	root = // cima de la pila
}

float Expression::eval(const SymbolTab &syms) const {
    // Devuelve el resultado de evaluar la expresion
    return 0;
}

string Expression::to_string() const {
    // Devuelve la cadena que representa la expresion
    return "null";
}

ostream &operator<<(ostream &os, const Expression &e) {
    os << e.to_string();

    return os;
}



