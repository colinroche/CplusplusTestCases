#include <iostream>
#include <sstream>

#define END "\n\n"
#define LINESPACE '\n'

using namespace std;

int main () {
    string sentence;
    cout << "Enter String: ";
    getline(cin, sentence);

    cout << sentence;

    cout << END;
    return 0;
}