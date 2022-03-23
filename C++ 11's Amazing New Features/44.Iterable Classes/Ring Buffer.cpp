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

    /*per poter rendere una classe iterabile è necessario che possa essere eseguito il seguente for loop,
     * con begin() ed end(), altrimenti non può funzionare */

    // C++98 style
    for (ring<string>::iterator it = textring.begin(); it != textring.end(); it++) {
        cout << *it << endl;
    }

    cout << endl;
    // C++11 style
    for(auto value: textring) {
        cout << value << endl;
    }

    return 0;
}