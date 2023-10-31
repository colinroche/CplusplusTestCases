// access to data members outside class is restricted to read-only
// the constructor is still called and is allowed to initialize and modify these data members

#include <iostream>
using namespace std;

class MyClass {
    public:
        int x;
        MyClass(int val) : x(val) {}
        int get() { return x; }
};

int main() {
    const MyClass a(4);
    cout << a.x << '\n';

    return 0;
}
