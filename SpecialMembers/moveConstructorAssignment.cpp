// moving requires copying the pointer

#include <iostream>
#include <string>
using namespace std;

// using Example4 from deconstructor.cpp
class Example4 {
        string* ptr;
    public:
        // constructor
        Example4(const string& str) : ptr(new string(str)) {}
        // deconstructor
        ~Example4() { delete ptr; }
        // move constructor
        Example4(Example4&& x) : ptr(x.ptr) { x.ptr = nullptr; }
        // move assignment
        Example4& operator= (Example4&& x) {
            delete ptr; 
            ptr = x.ptr;   
            x.ptr = nullptr; 
            return *this;
        }
        // access content
        const string& content() const { return *ptr; }
        // addition
        Example4 operator+(const Example4& rhs) {
            return Example4(content() + rhs.content());
        }
};

int main() {
    Example4 ex4("value");
    Example4 ex5(Example4(" move")); // move constructor

    ex4 = ex4 + ex5; // move assignment

    cout << "Example4 content: " << ex4.content() << '\n';
    cout << "Example4 copy content: " << ex5.content() << '\n';

    return 0;
}