//
// Created by Gioele Maruccia on 23/03/22.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int value{5};

    cout << value << endl;

    string text{"Hello"};
    cout << text << endl;

    int numbers[]{1, 2, 4};
    cout << numbers[1] << endl;


    int *pInts = new int[]{1, 2, 3};
    cout << pInts[1] << endl;
    delete pInts;

    int value1{};
    cout << value1 << endl;

    int *pSomething{&value};
    cout << *pSomething << endl;

    int *pSomething2{}; // equivalent to int *pSomething2 = nullptr;
    cout << pSomething2 << endl;

    int numbers1[5]{};
    cout << numbers1[1] << endl;


    // C++98 style
    struct {
        int value;
        string text;
    } s1 = {5, "Hi"};

    cout << s1.text << endl;

    // C++11 style
    struct {
        int value = 7;
        string text;
    } s2{4, "Hi"};

    cout << s2.text << endl;

    vector<string> strings{"one", "two", "three"};

    cout << strings[2] << endl;

    return 0;
}