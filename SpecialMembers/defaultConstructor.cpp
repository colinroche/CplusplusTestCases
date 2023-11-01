#include <iostream>
#include <sstream>
using namespace std;

// compiler assumes that Example has a default constructor
class Example {
    public:
        int total = 0;
        void accumulate(int x) { total += x; }
};

//  constructor taking parameters - compiler no longer provides an implicit default constructor
class Example2 {
    public:
        int total;
        Example2(int initial_value) : total(initial_value) {}
        void accumulate(int x) { total += x; }
};

class Example3 {
    public:
        int total;
        Example3(int initial_value) : total(initial_value) {}
        // default constructor
        Example3(){}
        void accumulate(int x) { total += x; }
};

class Example4 {
        string data;
    public:
        Example4(string str) : data(str) {}
        Example4() {}
        const string &content() const { return data; }
};

int main()
{
    Example ex;
    ex.accumulate(1);
    ex.accumulate(5);
    ex.accumulate(45);

    cout << "Total for Example: " << ex.total << '\n';

    // Example2 ex2; // not valid: no default constructor
    Example2 ex2(10);
    ex2.accumulate(1);
    ex2.accumulate(5);
    ex2.accumulate(45);

    cout << "Total for Example2: " << ex2.total << '\n';

    Example3 ex3_1; // does work but total is not initialize so given random value
    Example3 ex3(20);
    ex3.accumulate(1);
    ex3.accumulate(5);
    ex3.accumulate(45);

    cout << "Total for Example3: " << ex3.total << '\n';

    Example4 ex4_1; // empty block as no contetn has been set
    Example4 ex4("value");

    cout << "Example4_1 content: " << ex4_1.content() << '\n';
    cout << "Example4 content: " << ex4.content() << '\n';

    return 0;
}