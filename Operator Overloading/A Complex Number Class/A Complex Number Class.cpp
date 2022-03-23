//
// Created by Gioele Maruccia on 19/03/22.
//
#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprogramming;

int main() {
    Complex c1(2,3);
    Complex c2 = c1;

    Complex c3 = c2;

    c1 = c2; // calls the assigment operator

    cout << c2 << " " << c3 << endl;
    return 0;
}