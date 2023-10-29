// example of array using array container from library
#include <iostream>
#include <array>

#define END "\n\n"

using namespace std;

int main () {
    array<int, 3> myArray {2, 3, 4};

    for (int i = 0; i < myArray.size(); i++)
        myArray[i]++;

    for (int elements : myArray)
        cout << elements << ' ' ;

    cout << END;
    return 0;
}