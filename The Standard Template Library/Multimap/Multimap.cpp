//
// Created by Gioele Maruccia on 17/03/22.
//
#include <iostream>
#include <map>

using namespace std;

int main() {

    multimap<int, string> lookup;

    lookup.insert(make_pair(30, "Mike"));
    lookup.insert(make_pair(10, "Vicky"));
    lookup.insert(make_pair(30, "Raj"));
    lookup.insert(make_pair(20, "Bob"));

    for (multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }

    cout << endl;

    // questo for non funziona per trovare tutte le chiavi nella multimap. Permette solo
    // di individuare la prima chiave e poi scorrere la multimap fino alla fine
//    for (multimap<int, string>::iterator it = lookup.find(10); it != lookup.end(); it++) {
//        cout << it->first << ": " << it->second << endl;
//    }

    // per cercare una particolare chiave è necessario cercare piuttosto un RANGE
    // pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(30);
    // or
    auto its = lookup.equal_range(30);

    for (multimap<int, string>::iterator it = its.first; it != its.second; it++) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}