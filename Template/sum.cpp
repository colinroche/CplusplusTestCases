#include <iostream>

#define END "\n\n"
#define LINESPACE "\n"

using namespace std;

template <class T>
T sum (T a, T b){
    return a + b;
}

int main () {
    int a = 5, b = 10, answerInt;
    double x = 2.0, y = 14.6, answerDouble;

    answerInt = sum<int>(a, b);
    answerDouble = sum<double>(x, y);

    cout << a << " + " << b << " = " << answerInt << LINESPACE;
    cout << x << " + " << y << " = " << answerDouble << LINESPACE;
    cout << END;

    return 0;
}
