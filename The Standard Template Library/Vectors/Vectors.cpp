//
// Created by Gioele Maruccia on 15/03/22.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> strings;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    cout << strings.size() << endl;

    for (int i = 0; i < strings.size(); i++) {
        cout << strings[i] << endl;
    }

    for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}