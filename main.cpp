#include "expression.h"
#include "symboltab.h"

#include "operaciones/Tipo/Suma.h"
#include "numero/tipo/Constante.h"

#include <iostream>

using namespace std;

int main()
{
    SymbolTab syms;
     //Define en la tabla los valores de
     float a = 7.0;
     float b = 2.0;

     pair<string,float>pareja;
     pareja.first = "a";
     pareja.second = a;
     syms.insert(pareja);

    pareja.first = "b";             //Todo: mirar el nombre
    pareja.second = b;
    syms.insert(pareja);


    //Consulta el tipo 'map' de la STL

     /*Suma nodo1("+");
     Suma nodo4("+");

     Constante nodo2(2);
     Constante nodo5(7);
     nodo4.setIzq(&nodo2);
     nodo4.setDer(&nodo5);
     Constante nodo3(3);

     nodo1.setDer(&nodo4);
     nodo1.setIzq(&nodo3);

     cout << nodo1.eval(syms) << "\n";*/


    // 3 + 2 *  5 = 13
    Expression e1("3 2 5 * +");
    cout << e1 << " = " << e1.eval(syms) << endl;
    cout << endl;

    // (3 + 2) * 5 = 25
    Expression e2("3 2 + 5 *");
    cout << e2 << " = " << e2.eval(syms) << endl;
    cout << endl;

    // 3 - 2 * a = -11
    Expression e3("3 2 a * -");
    cout << e3 << " = " << e3.eval(syms) << endl;
    cout << endl;

    // (3 + a) / 2 = 5
    Expression e4("3 a + 2 /");
    cout << e4 << " = " << e4.eval(syms) << endl;
    cout << endl;

    // (1 + 2) * a / (4.1 - b) = 10
    Expression e5("1 2.0 + a * 4.1 b - /");
    cout << e5 << " = " << e5.eval(syms) << endl;
    cout << endl;

    // (1 + c) * 2 ERROR!!! 'c' no esta definida
    Expression e6("1 c + 2 *");
    cout << e6 << " = " << e6.eval(syms) << endl;
    cout << endl;

    return 0;
}
