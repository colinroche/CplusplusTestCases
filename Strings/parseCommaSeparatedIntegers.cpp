#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	
    vector<int> result;
    stringstream ss(str);
    char ch;
    
    for(int i ; ss >> i;) {
        // add element at the end of vector
        result.push_back(i);
        // returns the next character in the input sequence, without extracting it
        if(ss.peek() == ',') {
            // extracts characters from the input sequence and discards them
            ss.ignore();
        }
    }
    
    return result;
}

int main() {
    string str;
    cin >> str;
    
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
