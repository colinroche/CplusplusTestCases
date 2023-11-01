#include <iostream>
#include <string>
using namespace std;

// using Example4 from defaultCosntructor.cpp
class Example4 {
        string* ptr;
    public:
        // constructor
        Example4() : ptr(new string) {}
        Example4(const string& str) : ptr(new string(str)) {}
        // deconstructor
        ~Example4() { delete(ptr); }
        // access content
        const string& content() const { return *ptr; }
};

int main() {
    Example4 ex4_1; // empty block as no contetn has been set
    Example4 ex4("value");

    cout << "Example4_1 content: " << ex4_1.content() << '\n';
    cout << "Example4 content: " << ex4.content() << '\n';

    return 0;
}