#include <iostream>

#define END "\n\n"
#define LINESPACE "\n"

using namespace std;

// template with multiple template parameters, using non regular expression
template <class T, class U>
bool are_equal (T a, U b)
{
    return (a == b);
}

int main () {

    if (are_equal(10, 10.0)) 
        cout << "a equals b" << LINESPACE;
    else
        cout << "a does not equal b" << LINESPACE;

    return 0;
}