// copy constructor - deep copy - needed when using pointer, etc.

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
        // copy constructor
        Example4(const Example4& x) : ptr(new string(x.content())) {}
        // access content
        const string& content() const { return *ptr; }
};

int main() {
    Example4 ex4("value");
    Example4 ex5(ex4);

    cout << "Example4 content: " << ex4.content() << '\n';
    cout << "Example4 copy content: " << ex5.content() << '\n';

    return 0;
}