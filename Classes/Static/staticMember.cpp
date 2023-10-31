/*  static variable in class contains counter 
    - number of objects of that class that are currently allocated*/

// must be initialize outside class - have class scope

#include <iostream>
using namespace std;

class Test {
    public:
        static int n;
        Test() { n++; };
};

// intialize static member
int Test::n = 0;

int main () {
    Test a;
    Test b[5];

    // referred to by member object of class
    cout << a.n << '\n';

    Test * c = new Test();

    // referred to by class name
    cout << Test::n << '\n';

    delete c;
    return 0;
}