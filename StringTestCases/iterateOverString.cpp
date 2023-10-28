#include <iostream>
#include <string>

using namespace std;

int main() {
    string endspace = "\n\n";

    string mystr = "Iterate";

    for (auto c : mystr)
    {
        cout << c << '|';
    }

    cout << endspace;
    return 0;
}