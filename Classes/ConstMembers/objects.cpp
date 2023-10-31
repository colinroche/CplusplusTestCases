/*  Const member functions cannot modify non-static data members  
    nor call other non-const member functions. 
    Const members shall not modify the state of an object*/

#include <iostream>
using namespace std;

class MyClass {
    public:
        int x;
        MyClass(int val) : x(val) {}
        const int& get() const { return x; }
};

void print(const MyClass& arg) {
    cout << arg.get() << '\n';
}

int main() {
    const MyClass a(10);
    print(a);

    return 0;
}