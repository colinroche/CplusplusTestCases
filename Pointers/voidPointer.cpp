// pass generic parameters to a function using void pointers
#include <iostream>

#define END "\n\n"
#define LINESPACE '\n'

using namespace std;

void increase (void* data, int val_size) {
    if (val_size == sizeof(char)) {
        char * pchar = (char *)data;
        ++(*pchar);
    }
    else if (val_size == sizeof(int)) {
        int * pint = (int *)data;
        ++(*pint);
    }
}

int main () {
    char a = 'x';
    int b = 29;

    increase(&a, sizeof(a));
    increase(&b, sizeof(b));

    cout << a << LINESPACE;
    cout << b << LINESPACE;

    cout << END;
    return 0;
}