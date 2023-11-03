// capacity function in vector
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> example;

    for (int n = 0; n < 5; n++) {
        example.push_back(n);
    }

    cout << "Size: " << example.size() << '\n';
    cout << "Capacity: " << example.capacity() << '\n';
    cout << "Max size: " << example.max_size() << '\n';

    example.resize(4);

    cout << "Size: " << example.size() << '\n';

    if(example.empty()) {
        cout << "Vector is empty.\n";
    } else {
        cout << "Vector is not empty.\n";
    }

    example.shrink_to_fit();

    cout << "Vector elements are: ";

    for (auto n = example.begin(); n != example.end(); n++) {
        cout << *n << " ";
    }

        return 0;
}