// drived classes and constructors
#include <iostream>
using namespace std;

class Mother {
    public:
        Mother() { cout << "Mother: no parameter\n"; }
        Mother(int a) { cout << "Mother: int parameter\n"; }
};

class Daughter: public Mother {
    public:
        Daughter(int a) { cout << "Daughter: int parameters\n\n"; }
};

class Son: public Mother {
    public:
        Son(int a) : Mother(a) { cout << "Son: int parameters\n\n"; }
};

int main() {
    Daughter kelly(0);
    Son Ben(0);

    return 0;
}