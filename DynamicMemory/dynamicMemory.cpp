// new allocates dynamic memory
// delete frees allocated dynamic memory

/*  
    normally if memory allocation fails it throws an exception (need to handled)

    --- using (nothrow) ---
    declared with header <new>
    intialized -> pointer = new (nothrow) type
    if memory allocation fails can be checked (if (pointer == nullptr))
*/

#include <iostream>

#define END "\n\n"
#define LINESPACE '\n'

using namespace std;

int main() {
    int i, n;
    int * p;

    cout << "How many numbers would you like to type? ";
    cin >> i;
    p = new int[i];

    for (n = 0; n < i; n++) {
        cout << "Enter number: ";
        cin >> p[n];
    }

    cout << "You have entered: ";
    for (n = 0; n < i; n++)
    {
        cout << p[n] << ", ";
    }
    delete[] p;

    cout << END;
    return 0;
}