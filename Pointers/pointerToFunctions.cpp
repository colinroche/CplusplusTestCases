// pointers to function - for passing a function as an argument of another function;
#include <iostream>

#define END "\n\n"
#define LINESPACE '\n'

using namespace std;

int addition (int a, int b) {
    return a + b;
}

int subtraction (int a, int b) {
    return a - b;
}

int operation (int a, int b, int (*functioncall)(int, int)) {
    int g = (*functioncall)(a, b);
    return g;
}

int main () {
    int a, b;
    int (*minus)(int, int) = subtraction;

    a = operation(7, 5, addition);
    b = operation(20, a, minus);

    cout << b;

    cout << END;
    return 0;
}