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
    // overloading operator
    CVector operator + (const CVector&);
};

// define overloaded (+) operator
CVector CVector::operator+ (const CVector& param) {
    CVector temp;
    temp.x = x + param.x;
    temp.y = y + param.y;
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