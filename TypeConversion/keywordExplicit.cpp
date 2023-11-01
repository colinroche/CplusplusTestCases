// explicit:
#include <iostream>
using namespace std;

class A {};

class B {
    public:
        explicit B(const A& x) {}
        B& operator=(const A& x) { return *this; }
        operator A() { return A(); }
};

void fn (B x) {}

int main() {
    A temp1;
    B temp2(temp1);

    temp2 = temp1;
    temp1 = temp2;

    // B temp2 = temp1; // not allowed assignment-like syntax for explicit
    // fn (temp1); // not allowed for explicit cotr
    fn(temp2);

    return 0;
}