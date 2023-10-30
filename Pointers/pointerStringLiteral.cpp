#include <iostream>

#define END "\n\n"
#define LINESPACE '\n'

using namespace std;

int main ()
{
    const char * ptr = "Hello";

    cout << ptr << LINESPACE;
    cout << *ptr << LINESPACE;
    cout << &ptr << LINESPACE;
    cout << ptr[2] << LINESPACE;
    cout << *(ptr + 2) << LINESPACE;
    cout << ptr + 2 << LINESPACE;

    cout << END;
    return 0;
}