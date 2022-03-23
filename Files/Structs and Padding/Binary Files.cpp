//
// Created by Gioele Maruccia on 19/03/22.
//

#include <iostream>
using namespace std;

// Su una struct in C++ avviene il cosiddetto PADDING. Ovvero viene aggiunta un'area di memoria vuota che permette di migliorare l'efficenza del programma.
// La seguente struttura occuperebbe 50 + 4 + 8 = 62 bytes, ma se usiamo sizeof() vediamo che la sua dimensione è 64 bytes.
struct Person {
    char name[50];
    int  age;
    double weight;
};

// per disattivare il padding bisogna usare una direttiva del preprocessore "pragma pack"
#pragma pack(push, 1)
struct Person2 {
    char name[50];
    int  age;
    double weight;
};
// pragma pop per rimuovere il constraint fissato prima
#pragma pack(pop)

struct Person3 {
    char name[50];
    int  age;
    double weight;
};

int main() {
    cout << sizeof(Person) << endl;
    cout << sizeof(Person2) << endl;
    cout << sizeof(Person3) << endl;

    return 0;
}