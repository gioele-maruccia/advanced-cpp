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
    textring.add("five");


    /*per poter rendere una classe iterabile è necessario che possa essere eseguito il seguente for loop,
     * con begin() ed end(), altrimenti non può funzionare */

    for (ring<string>::iterator it = textring.begin(); it != textring.end(); it++) {
        cout << *it << endl;
    }

    cout << endl;

    for (string value: textring) {
        cout << value << endl;
    }


    return 0;
}