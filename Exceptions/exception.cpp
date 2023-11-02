/*  After an exception has been handled,
    execution resumes after the try-catch block, 
    not after the throw statement!. */

// exception
#include <iostream>
using namespace std;

int main() {
    // try-block
    try {
        // exception thrown - throw accepts 1 parameter - type int
        throw 20;
        // exception thrown - type char
    //    throw 'c';
        // excpetion handler declared with catch - 1 parameter - must match type thrown
    } catch (int e) {
        cout << "Int exception: " << e << '\n';
        // exception handler with a char argument type
    } catch (char e) {
        cout << "Char exception: " << e << '\n';
        // default expection handler "..." catches any exception type
    } catch (...) {
        cout << "Default exception.\n";
    }
    return 0;
}