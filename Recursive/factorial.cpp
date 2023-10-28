#include <iostream>

#define END "\n\n"

using namespace std;

long factorial (long a) {
    if (a > 1) 
        return (a * factorial (a - 1));
    else
        return 1;
}

int main () {
    int i = 4;

    cout << i << "! = " << factorial(i);
    cout << END;

    return 0;
}