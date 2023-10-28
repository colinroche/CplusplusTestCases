#include <iostream>
#include <string>

using namespace std;

int main()
{
    string endSpace = "\n\n";
    string sentence;
    
    cout << "Enter a string: ";
    getline(cin, sentence);
    cout << "\n" << sentence << endSpace;

    return 0;
}
