#include <iostream>
using namespace std;

template <class T>
class MyPair {
        T values[2];
    public:
        MyPair(T first, T second) {
            values[0] = first;
            values[1] = second;
        }
        T getMax();
};

template <class T>
T MyPair<T>::getMax() {
    T retval;
    retval = values[0] > values[1] ? values[0] : values[1];
    return retval;
}

int main() {
    MyPair<int> myObject(8, 2);
    MyPair<double> myFloat(89.4, 34.2);

    cout << myObject.getMax() << '\n';
    cout << myFloat.getMax() << '\n';
    return 0;
}