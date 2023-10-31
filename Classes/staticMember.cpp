/*  static variable in class contains counter 
    - number of objects of that class that are currently allocated*/

#include <iostream>
using namespace std;

class Test {
    public:
        static int n;
        Test() { n++; };
};

int Test::n = 0;

int main () {
    Test a;
    Test b[5];

    cout << a.n << '\n';

    Test * c = new Test();

    cout << Test::n << '\n';;

    return 0;
}