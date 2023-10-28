#include <iostream>

#define END "\n\n"
#define LINESPACE "\n"

using namespace std;

template <class T>
T sum (T a, T b){
    T result;
    result = a + b;
    return result;
}

int main () {
    int a = 5, b = 10, answerInt;
    double x = 2.0, y = 14.6, answerDouble;

    // either work as generic type T is used as a parameter
    //answerInt = sum<int>(a, b);
    //answerDouble = sum<double>(x, y);

    answerInt = sum(a, b);
    answerDouble = sum(x, y);

    cout << a << " + " << b << " = " << answerInt << LINESPACE;
    cout << x << " + " << y << " = " << answerDouble << LINESPACE;
    cout << END;

    return 0;
}
