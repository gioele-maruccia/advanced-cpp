//
// Created by Gioele Maruccia on 19/03/22.
//

//
// Created by Gioele Maruccia on 19/03/22.
//

#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push, 1)
struct Person {
    char name[50];
    int age;
    double height;
};
#pragma pack(pop)

int main() {
    Person someone = {"Frodo", 220, 0.8};

    string fileName = "/Users/gioelemaruccia/Documents/learning/Master of C++/Files/Reading and Writing Binary Fiels/test.bin";

    //// Write binary file /////////////
    ofstream outputFile; // output file stream

    outputFile.open(fileName, ios::binary);

    if (outputFile.is_open()) {

        outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

        outputFile.close();
    } else {
        cout << "Could not create file " + fileName;
    }

    //// Read binary file /////////////
    Person someoneElse = {};

    ifstream inputFile; // output file stream

    inputFile.open(fileName, ios::binary);

    if (inputFile.is_open()) {

        inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));

        inputFile.close();
    } else {
        cout << "Could not read file " + fileName;
    }

    cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;

    return 0;
}