//
// Created by Gioele Maruccia on 22/03/22.
//
#include <iostream>
#include "ring.h"

int main() {
    ring<string> textring(3);

    textring.add("one");
    textring.add("two");
    textring.add("three");
    textring.add("four");


    for (int i = 0; i < textring.size(); i++) {
        cout << textring.get(i) << endl;
    }


    return 0;
}