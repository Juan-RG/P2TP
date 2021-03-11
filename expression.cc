#include "expression.h"
#include "operaciones/Tipo/Suma.h"
#include "operaciones/Tipo/Resta.h"
#include "operaciones/Tipo/Div.h"
#include "operaciones/Tipo/Mult.h"

#include "numero/tipo/Constante.h"
#include "numero/tipo/var.h"

#include <sstream>

using namespace std;

Expression::Expression(const std::string &s) {
    parse(s);
}

void Expression::parse(const string &s) {
    istringstream ss(s);
    string tok;

    while (ss >> tok) {
        if (tok == "+") { //TODO: hay que desapilar dos datos de la pila, para pasarlos como nodos hijos
            // Apilar suma
            Caracter* der = nullptr;
            Caracter* izq = nullptr;
            asignarHijos(&der, &izq);
            auto* nodoSuma = new Suma(izq, der);
            stk.push(nodoSuma);
        } else if (tok == "-") {
            Caracter *der = nullptr;
            Caracter *izq = nullptr;
            asignarHijos(&der, &izq);
            auto* nodoResta = new Resta(izq, der);
            stk.push(nodoResta);
        } else if (tok == "*") {
            Caracter *der = nullptr;
            Caracter *izq = nullptr;
            asignarHijos(&der, &izq);
            auto* nodoMult = new Mult(izq, der);
            stk.push(nodoMult);
        } else if (tok == "/") {
            Caracter *der = nullptr;
            Caracter *izq = nullptr;
            asignarHijos(&der, &izq);
            auto* nodoDiv = new Div(izq, der);
            stk.push(nodoDiv);
        } else {
            // Variable o constante
            // Si comienza por un caracter no numerico,
            // es un nombre de variable
            if (isalpha(tok[0])) {
                // Apilar variable
                auto* variable = new var(tok);
                stk.push(variable);

            } else {
                // Apilar constante
                auto* constante = new Constante(stof(tok));
                stk.push(constante);
            }
        }
    }
    root = stk.top();   // Todo;	root = // cima de la pila
    stk.pop();
}

void Expression::asignarHijos(Caracter **der, Caracter **izq) {
    *der = stk.top();
    stk.pop();
    *izq = stk.top();
    stk.pop();
}

float Expression::eval(const SymbolTab &syms) const {
    return root->eval(syms);
}

string Expression::to_string() const {
    return root->to_String();
}

ostream &operator<<(ostream &os, const Expression &e) {
    os << e.to_string();
    return os;
}



