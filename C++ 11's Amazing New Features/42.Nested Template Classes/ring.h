//
// Created by Gioele Maruccia on 22/03/22.
//

#ifndef NESTED_TEMPLATE_CLASSES_RING_H
#define NESTED_TEMPLATE_CLASSES_RING_H

#include <iostream>

using namespace std;

template<class T>
class ring {
public:
    class iterator;
};

// iterator è una classe innestata in ring e definita qui, sebbene sia dichiarata all'interno della classe ring.
template<class T>
class ring<T>::iterator {
public:
    void print() {
        cout << "Hello from iterator" << T() << endl;
    }
};


#endif //NESTED_TEMPLATE_CLASSES_RING_H
