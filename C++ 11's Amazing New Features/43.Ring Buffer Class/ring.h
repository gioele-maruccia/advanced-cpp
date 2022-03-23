//
// Created by Gioele Maruccia on 22/03/22.
//

#ifndef NESTED_TEMPLATE_CLASSES_RING_H
#define NESTED_TEMPLATE_CLASSES_RING_H

#include <iostream>

using namespace std;

template<class T>
class ring {
private:
    int m_pos;
    int m_size;
    T *m_values;

public:
    class iterator;

public:
    ring(int size) : m_pos(0), m_size(size), m_values(NULL) {
        m_values = new T[size];
    }

    ~ring() {
        delete[] m_values;
    }

    int size() {
        return m_size;
    }

    void add(T value) {
        m_values[m_pos++] = value;

        if(m_pos == m_size) {
            m_pos = 0;
        }
    }

    // ritorniamo una reference in quanto è consigliato per risparmiare memoria, anziché ritornare ogni valota un valore che potrebbe essere grosso
    T &get(int pos) {
        return m_values[pos];
    }
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
