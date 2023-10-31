// access to data members outside class is restricted to read-only
// the constructor is still called and is allowed to initialize and modify these data members

// can only read x
// cannot call get()

#include <iostream>
using namespace std;

class MyClass {
    public:
        int x;
        MyClass(int val) : x(val) {}
        // can only call a member of const object if member is also const
        int get() { return x; }
        //int get() const {return x;}        // const member function
        //const int& get() {return x;}       // member function returning a const&
        //const int& get() const {return x;} // const member function returning a const& 
};

int main() {
    const MyClass a(4);
    cout << a.x << '\n';
    

    return 0;
}
