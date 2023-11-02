// accept 2 special operator # and ## in replacement sequence
#include <iostream>
#define getMax(a,b) ((a)>(b)? (a):(b))
// operator # followed by parameter name is replace by a string literal - contains argument passed
#define str(x) #x
// operator ## concatenates 2 arguments leaving no blank space between them
#define glue(a,b) a ## b
using namespace std;

int main() {
    int x = 69, y;
    y = getMax(x, 8);

    cout << y << '\n';
    cout << getMax(90, x) << '\n';

    cout << str(test) << '\n';
    glue(c, out) << "test2\n";

    return 0;
}