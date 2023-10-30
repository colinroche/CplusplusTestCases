#include <iostream>

#define END "\n\n"
#define LINESPACE '\n'

using namespace std;

int main () {
    int first, second;
    int * ptr;

    ptr = &first;
    *ptr = 10;
    ptr = &second;
    *ptr = 20;

    cout << "First value: " << first << LINESPACE;
    cout << "Second value: " << second << LINESPACE;

    cout << END;
    return 0;
}
