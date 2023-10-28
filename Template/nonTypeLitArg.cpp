// Non-type template arguments
#include <iostream>

#define END "\n\n"
#define LINESPACE '\n'

using namespace std;

template <class T, int N>
T fixed_multiple(T val)
{
    return val * N;
}

int main () {
    cout << fixed_multiple<int, 4>(10) << LINESPACE;
    cout << fixed_multiple<int, 8>(10) << LINESPACE;

    cout << END;

    return 0;
}