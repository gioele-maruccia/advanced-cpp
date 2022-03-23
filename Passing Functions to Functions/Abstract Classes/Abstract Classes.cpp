//
// Created by Gioele Maruccia on 21/03/22.
//
#include <iostream>

using namespace std;

// una classe che contiene solo pure virtual functions è detta astratta.
class Animal {
public:
    virtual void run() = 0;

    // questa è una pure virtual function, ovvero una funzione senza implementazione
    virtual void speak() = 0;
};

class Dog : public Animal {
public:
    virtual void speak() {
        cout << "Woof!" << endl;
    }
};

class Labrador : public Dog {
public:
    Labrador() {
        cout << "new labrador" << endl;
    }

    virtual void run() {
        cout << "Labrador running" << endl;
    }
};

void test(Animal &a) {
    a.speak();
}

int main() {
    Labrador lab;
    lab.run();
    lab.speak();

    Animal *animals[5];
    animals[0] = &lab;
    animals[0]->speak();

    test(lab);
    return 0;
}
