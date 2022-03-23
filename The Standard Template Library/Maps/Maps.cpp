//
// Created by Gioele Maruccia on 16/03/22.
//
#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> ages;
    ages["Mike"] = 40;
    ages["Raj"] = 20;
    ages["Vicky"] = 30;

    pair<string, int> addToMap("Peter", 100);
    ages.insert(addToMap);
    ages.insert(pair<string,int>("Gioele", 27));
    ages.insert(make_pair("Mario", 32));  // automatically infer the types of the variables

    cout << ages["Raj"] << endl;
    // se proviamo a stampare una chiave che non esiste questa viene creata con il valore di default
    cout << ages["Sue"] << endl;

    if (ages.find("Vicky1") != ages.end()) {
        cout << "Found Vicky!" << endl;
    } else {
        cout << "Key not found!" << endl;
    }

    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
        pair<string, int> age = *it;
        cout << age.first << " : " << age.second << endl;
    }
    cout << endl;

    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}