//
// Created by Gioele Maruccia on 18/03/22.
//
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string inFileName = "/Users/gioelemaruccia/Documents/learning/Master of C++/Reading Text Files/test.txt";

    ifstream inFile;

    inFile.open(inFileName);

    if (inFile.is_open()) {
        string line;
        while (inFile) {
            getline(inFile, line);
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Cannot open file: " << inFileName << endl;
    }
    return 0;
}