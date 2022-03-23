//
// Created by Gioele Maruccia on 15/03/22.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> numbers(0 );

    int capacity = numbers.capacity();
    cout << "Capacity: " << capacity << endl;

    for (int i = 0; i < 10000; i++) {
        if (numbers.capacity() != capacity) {
            capacity = numbers.capacity();
            cout << "Capacity = " << capacity << endl;
        }

        numbers.push_back(i);
    }

    return 0;
}