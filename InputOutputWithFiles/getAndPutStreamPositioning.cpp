// obtaining file size
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // streampos - type representing the current get position or the put position
    /* streampos - specific type used for buffer and file positioning and 
                   is the type returned by file.tellg() */
    streampos begin, end;
    ifstream myfile("example.bin" , ios::binary);
    // tellg - current get position
    begin = myfile.tellg();
    // seekg - change the location of the get
    // offset counted from the end of the stream
    myfile.seekg(0, ios::end);
    end = myfile.tellg();
    myfile.close();

    cout << "size is: " << (end-begin) << " bytes.\n";

    return 0;
}