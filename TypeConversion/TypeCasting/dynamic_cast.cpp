// dynamic_cast can only be used with pointers and references to classes (or with void*).

// dynamic_cast
#include <iostream>
#include <exception>
using namespace std;

class Base { virtual void Dummy() {} };
class Derived: public Base { int a; };

int
main() {
    try {
        Base * pba = new Derived;
        Base * pbb = new Base;
        Derived * pd;

        pd = dynamic_cast<Derived *>(pba);
        if (pd == 0)
            cout << "Null pointer on first type-cast";

        pd = dynamic_cast<Derived *>(pbb);
        if (pd == 0)
            cout << "Null pointer on second type-cast";
    } catch (exception& e) {
        cout << "Excpetion: " << e.what();
    }

    return 0;
}