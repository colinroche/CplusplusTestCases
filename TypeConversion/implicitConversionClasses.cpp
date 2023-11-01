// implicit conversion of classes:
#include <iostream>
using namespace std;

class A {};

class B {
    public:
        // conversion from A (constructor)
        B(const A& x) {}
        // conversion from A (assignment)
        B& operator=(const A& x) { return *this; }
        // conversion to A (type-cast operator)
        operator A() { return A(); }
};

int main() {
    A temp1;
    B temp2 = temp1; // calls constructor
    temp2 = temp1; // calls assignment
    temp1 = temp2; // calls type-cast operator

    return 0;
}