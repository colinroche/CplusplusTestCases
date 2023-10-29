#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    char linespace = '\n';
    string endspace = "\n\n";
    
    string mystr;
    double price;
    int quantity;
    double total;

    cout << "Enter Price: ";
    getline(cin, mystr);
    stringstream(mystr) >> price;

    cout << ("Enter Quantity: ");
    getline(cin, mystr);
    stringstream(mystr) >> quantity;

    total = price * quantity;

    cout << "\nPrice Entered: " << price << linespace;
    cout << "Quantity Entered: " << quantity << linespace;
    cout << "Total: " << total << endspace;

    return 0;
}