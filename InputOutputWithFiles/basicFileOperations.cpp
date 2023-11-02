#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // write on files
    ofstream myfile;

    myfile.open("example.txt");
    myfile << "Writing this to file.\n";
    myfile.close();

    return 0;
}