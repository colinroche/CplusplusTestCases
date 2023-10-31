/*  Syntax for overlaoding operators: 
    type operator sign (parameters) { ... body ... } */

#include <iostream>
using namespace std;

class CVector {
  public :
    int x, y;
    // constructor definition -- default constructor
    CVector(){};
    CVector(int a, int b) : x(a), y(b) {}
};

// define overloaded (+) operator
CVector operator+ (const CVector& lhs, const CVector& rhs) {
    CVector temp;
    temp.x = lhs.x + rhs.x;
    temp.y = lhs.y + rhs.y;
    return temp;
}

int main() {
    CVector vec1(3, 1);
    CVector vec2(1, 2);
    CVector result;

    result = vec1 + vec2;

    cout << result.x << ',' << result.y << '\n';

    return 0;
}