//
// Created by Gioele Maruccia on 21/03/22.
//
#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprogramming;

int main() {
    Complex c1(2, 4);

    /* volendo, si può dare all'operatore di dereferencing (cioè l'asterisco prima del nome) una funziona diversa da quella classica.
    Di norma, infatti, questo operatore, a partire da un puntatore, restituisce l oggetto a cui fa riferimento, ma questo comportamento
    si può anche modificare con l'overloading */
    cout << (*c1) + *Complex(4,3) << endl;

    return 0;
}