//
// Created by Gioele Maruccia on 18/03/22.
//
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string filename = "/Users/gioelemaruccia/Documents/learning/Master of C++/Parsing Text in Files/stats.txt";
    ifstream input;

    input.open(filename);
    if (!input.is_open()) {
        return 1;
    }

    while (input) {
        string line;
        getline(input, line, ':');
        int population;
        input >> population;

        // input.get();
        input >> ws; // for c++11
        if (!input) {
            break;
        }

        cout << "'" << line << "'" << " -- '" << population << "'" << endl;
    }

    input.close();

    return 0;
}