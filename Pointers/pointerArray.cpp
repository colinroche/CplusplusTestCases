#include <iostream>

#define END "\n\n"

using namespace std;

int main ()
{
    int myArray[5];
    int * ptr;
    
    ptr = myArray;  *ptr = 10;
    ptr++;  *ptr = 20;
    ptr = &myArray[2];  *ptr = 30;
    ptr = myArray + 3;  *ptr = 40;
    ptr = myArray;  *(ptr+4) = 50;

    for (int n=0; n<5; n++)
        cout << myArray[n] << ", ";

    cout << END;
    return 0;
}