#include <iostream>
using namespace std;

class Calculations {
    public:
        static int add (int a, int b) {
            return a + b; 
        }

        static int subtract (int a, int b) {
            return a - b;
        }

        static int mulitply (int a, int b) {
            return a * b;
        }

        static int divide (int a, int b) {
            return a / b;
        }
};

int main() {
    int result1 = Calculations::add(3, 4);
    int result2 = Calculations::subtract(7, 2);
    int result3 = Calculations::mulitply(2, 4);
    int result4 = Calculations::divide(90, 5);

    cout << "3 + 4: " << result1 << '\n';
    cout << "7 - 2: " << result2 << '\n';
    cout << "2 * 4: " << result3 << '\n';
    cout << "90 / 5: " << result4 << '\n';

    return 0;
}