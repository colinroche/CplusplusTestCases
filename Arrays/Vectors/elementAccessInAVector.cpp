// element access in a vector
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> example;

    for (int n = 0; n < 10; n++) {
        example.push_back(n * 10);
    }

    cout << "\nReference operator [g] : example[2] = " << example[2];
    cout << "\nat : example.at(4) = " << example.at(4);
    cout << "\nfront : example.front() = " << example.front();
    cout << "\nback : example.back() = " << example.back();

    // pointer to the first element
    int * ptr = example.data();

    cout << "\nThe first element is: " << *ptr << '\n';

    return 0;
}