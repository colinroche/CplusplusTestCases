// iterators in vectors
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> example1;

    for (int n = 0; n < 5; n++) {
        example1.push_back(n);
    }

    cout << "Output of begin to end: ";

    for (auto n = example1.begin(); n != example1.end(); n++) {
        cout << *n << " ";
    }

    cout << "\nOutput of cbegin to cend: ";

    for (auto n = example1.cbegin(); n != example1.cend(); n++) {
        cout << *n << " ";
    }

    cout << "\nOutput of rbegin to rend: ";

    for (auto n = example1.rbegin(); n != example1.rend(); n++) {
        cout << *n << " ";
    }

    cout << "\nOutput of crbegin to crend: ";

    for (auto n = example1.crbegin(); n != example1.crend(); n++) {
        cout << *n << " ";
    }

        return 0;
}