//
// Created by Gioele Maruccia on 22/03/22.
//

#include <iostream>
#include "ring.h"

using namespace std;

int main() {
    ring<int>::iterator it;

    it.print();

    /* ring <string> textring(3);

    textring.add("one");
    textring.add("two");
    textring.add("three");
    textring.add("four");

    for (int i = 0; i < textring.size(); i++) {
        cout << textring.get(i) << endl;
    }
    */

    /*
     * Output should be
     * four
     * one
     * two
     * one
     */

    return 0;
}