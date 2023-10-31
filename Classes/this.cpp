/*  keyword "this" pointer to the object whose member function is being executed. 
    used within a class's member function to refer to the object itself */
#include <iostream>
using namespace std;

class Test {
  public:
      bool itsme(Test& param);
};

bool Test::itsme(Test& param) {
    if (&param == this) 
        return true;
    else
        return false;
}

int main () {
    Test a;
    Test * b = &a;

    if (b->itsme(a)) {
        cout << "yea &a = b\n";
    }

    return 0;
}