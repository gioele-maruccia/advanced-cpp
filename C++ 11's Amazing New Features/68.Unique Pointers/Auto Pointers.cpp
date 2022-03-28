//
// Created by gioel on 3/28/2022.
//

#include <iostream>
#include <memory>
using namespace std;

///  FOR EXAMPLES 1,2,3

class Test {
public:
    Test() {
        cout << "created" << endl;
    }

    void greet() {
        cout << "Hello" << endl;
    }

    ~Test() {
        cout << "destroyed" << endl;
    }
};

///  FOR EXAMPLE 4
class Temp {
private:
    unique_ptr<Test[]> pTest;

public:
    Temp(): pTest(new Test[2]) {

    }
};

int main() {

/*
 * The unique_ptr is a smart pointer that is extremely useful to avoid memory leaks due to incorrect memory allocation. By making
 * use of them we are actually sure deallocation of memory is performed automatically.
 * Per poter utilizzare unique_ptr è necessario prima includere la libreria memory.
 */

    /////////////////////////////////////////// ///////////////////////////////////////////
    /// EXAMPLE 1

//    unique_ptr<int> pTest1(new int);
//
//    /* Once defined, a unique_ptr can be used as a normal pointer */
//    *pTest1 = 7;
//
//    cout << endl;

    /////////////////////////////////////////// ///////////////////////////////////////////
    /// EXAMPLE 2
    /* Now, in order to see how deallocation is performed, we try to define a smart pointer using the class Test */

//    unique_ptr<Test> pTest(new Test);
//    pTest->greet();

    /* auto_ptr is the deprecated version of unique_ptr */

    /////////////////////////////////////////// ///////////////////////////////////////////
    /// EXAMPLE 3
    // array
    // unique_ptr<Test[]> pTest2(new Test[2]);
    // pTest2[1].greet();

    /////////////////////////////////////////// ///////////////////////////////////////////
    /// EXAMPLE 4
    Test temp; // Here we see that object will be destruted automatically so we don't need a destructor anymore.
    cout << "Finished" << endl;
    return 0;
}