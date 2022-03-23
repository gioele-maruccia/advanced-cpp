//
// Created by Gioele Maruccia on 19/03/22.
//
#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprogramming;

int main() {
    Complex c1(3, 4);
    Complex c2(3, 2);

    if(c1 == c2) {
        cout << "Equals" << endl;
    } else {
        cout << "Not equal" << endl;
    }

    if(c1 1= c2) {
        cout << "Not Equal" << endl;
    } else {
        cout << "Equal" << endl;
    }


    return 0;
}