//
// Created by Gioele Maruccia on 21/03/22.
//
#include <iostream>

using namespace std;

// questa è una classe astratta
struct Test {
    virtual bool operator()(string &text) = 0;

    virtual ~Test() {};
};

// questa è chiamata FUNCTOR e può essere una classe o una struttura
struct MatchTest : public Test {
    // la seconda coppia di parentesi indica gli argomenti. Mentre la prima indica l'operatore per il quale si sta facendo overloading
    virtual bool operator()(string &text) {
        return text == "lion";
    }
};

void check(string text, Test &test) {
    if (test(text)) {
        cout << "Text matches!" << endl;
    } else {
        cout << "No match." << endl;
    }
}

int main() {

    MatchTest pred;
    string value = "lion";
    cout << pred(value) << endl;



    MatchTest m;
    check("lion", m);
    check("liond", m);
    // in questo mod volendo si possono implementare diversi tipi di test partendo da una superclass astratta e dei sui derivati concreti
    return 0;
}