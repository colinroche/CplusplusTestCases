// modifiers in vectors
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // assign vector
    vector<int> example;

    // fill vector with 10 five times
    example.assign(5, 10);

    cout << "The vector element are: ";
    for (int n = 0; n < example.size(); n++) {
        cout << example[n] << " ";
    }

    // insert 15 to last position
    example.push_back(15);
    int n = example.size();
    cout << "\nThe last element in vector is: " << example[n - 1];

    // remove last element
    example.pop_back();

    // print vector
    cout << "\nThe vector elements are: ";
    for (int n = 0; n < example.size(); n++) {
        cout << example[n] << ' ';
    }

    // insert 5 at the begining
    example.insert(example.begin(), 5);
    // print first element;
    cout << "\nFirst element in vector is: " << example.front();

    // delete first element
    example.erase(example.begin());
    cout << "\nFirst element in vector is: " << example.front();

    // insert 5 at the begining
    example.emplace(example.begin(), 5);
    cout << "\nFirst element in vector is: " << example.front();

    // insert 20 at the end
    //example.insert(example.end(), 20);
    example.emplace_back(20);
    cout << "\nFirst element in vector is: " << example[example.size() - 1];

    // erase vector
    example.clear();
    cout << "\nVector size after we clear: " << example.size();

    // 2 vectors to preform swap;
    vector<int> example1, example2;
    
    example1.assign(3, 5);
    example2.assign(7, 1);

    cout << "\nThe vector example1 elements are: ";
    for (int n = 0; n < example1.size(); n++) {
        cout << example1[n] << ' ';
    }

    cout << "\nThe vector example2 elements are: ";
    for (int n = 0; n < example2.size(); n++) {
        cout << example2[n] << ' ';
    }

    example1.swap(example2);

    cout << "\nThe vector example1 elements after swap are: ";
    for (int n = 0; n < example1.size(); n++) {
        cout << example1[n] << ' ';
    }

    cout << "\nThe vector example2 elements after swap are: ";
    for (int n = 0; n < example2.size(); n++) {
        cout << example2[n] << ' ';
    }

    return 0;
}