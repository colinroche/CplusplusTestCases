// copy constructor - deep copy - needed when using pointer, etc.

#include <iostream>
#include <string>
using namespace std;

// using Example4 from copyConstructor.cpp
class Example4 {
        string* ptr;
    public:
        // constructor
        Example4(const string& str) : ptr(new string(str)) {}
        // deconstructor
        ~Example4() { delete ptr; }
        // copy constructor
        Example4(const Example4& x) : ptr(new string(x.content())) {}
        // access content
        const string& content() const { return *ptr; }

        // copy assignment that deletes the previous object and performs a deep copy
        /*Example4& operator= (const Example4& x) {
            delete ptr;                      // delete currently pointed string
            ptr = new string (x.content());  // allocate space for new string, and copy
            return *this;
        }*/
        
        // copy assignment - string member is not constant, re-utilize the same string object
        Example4& operator= (const Example4& x) {
            *ptr = x.content();
            return *this;
        } 
};



int main() {
    Example4 ex4("value");
    Example4 ex5 = ex4;

    cout << "Example4 content: " << ex4.content() << '\n';
    cout << "Example4 copy content: " << ex5.content() << '\n';

    return 0;
}