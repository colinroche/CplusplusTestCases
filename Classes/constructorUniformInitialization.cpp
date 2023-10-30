// 4 ways ways to construct objects of a class whose constructor takes a single parameter

#include <iostream>
using namespace std;

class Circle {
    double radius;
  public:
    Circle(double r) { radius = r; }
    double circum() { return 2 * radius * 3.14159265; }
};

int main() {
    Circle cir_1 (10.0); // functional form
    Circle cir_2 = 20.0; // assignment init
    Circle cir_3 {30.0};  // uniform init
    Circle cir_4 = {40.0}; // POD(Plain Old Data)-like

    cout << "First Circle's circumference: " << cir_1.circum() << '\n';
    cout << "Second Circle's circumference: " << cir_2.circum() << '\n';
    cout << "Third Circle's circumference: " << cir_3.circum() << '\n';
    cout << "Fourth Circle's circumference: " << cir_4.circum() << '\n';

    return 0;
}