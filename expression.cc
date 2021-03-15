#include "expression.h"
#include "Suma.h"
#include "Resta.h"
#include "Div.h"
#include "Mult.h"

#include "Constante.h"
#include "var.h"

#include <sstream>

using namespace std;

Expression::Expression(const std::string &s) {
    parse(s);
}

void Expression::parse(const string &s) {
    istringstream ss(s);
    string tok;

    Caracter *der = nullptr;
    Caracter *izq = nullptr;

    while (ss >> tok) {
        if (tok == "+") { //TODO: hay que desapilar dos datos de la pila, para pasarlos como nodos hijos
            // Apilar suma
            asignarHijos(&der, &izq);
            auto* nodoSuma = new Suma(izq, der);
            stk.push(nodoSuma);
        } else if (tok == "-") {
            asignarHijos(&der, &izq);
            auto* nodoResta = new Resta(izq, der);
            stk.push(nodoResta);
        } else if (tok == "*") {
            asignarHijos(&der, &izq);
            auto* nodoMult = new Mult(izq, der);
            stk.push(nodoMult);
        } else if (tok == "/") {
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
    root = stk.top();
    stk.pop();
}

/**
 * Metodo que asigna a cada hijo su valor correspondiente de la pila
 * @param der
 * @param izq
 */
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



