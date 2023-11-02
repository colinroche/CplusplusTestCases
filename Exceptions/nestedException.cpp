// nested exception
#include <iostream>
using namespace std;

int main() {
    try {
        try {
            try {
                throw 20;
            } catch (int e) {
                cout << "Int exception: " << e << '\n';
                throw 'c';
            } 
        } catch (char e) {
            cout << "Char exception: " << e << '\n';
            throw 34.88;
        } 
    } catch (...) {
        cout << "Default exception\n";
    }
    
    return 0;
}