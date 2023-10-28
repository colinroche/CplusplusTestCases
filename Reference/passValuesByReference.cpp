#include <iostream>

#define END "\n\n"

using namespace std;

void duplicate(int& a, int& b, int& c) {
    a *= 2;
    b *= 2;
    c *= 2;
}

int main() {
    int x = 1, y = 2, z = 3;
    duplicate(x, y, z);

    cout << "x: " << x << ", y: " << y << ", z: " << z;
    cout << END;
}