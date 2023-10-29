// example using arrays as a parameter
#include <iostream>

#define END "\n\n"
#define LINESPACE '\n'

using namespace std;

void array_params(int arg[], int length)
{
    for (int n = 0; n < length; n++)
        cout << arg[n] << ' ';
    cout << LINESPACE;
}

int main ()
{
    int firstArray[]{1, 2, 3};
    int secondArray[]{1, 2, 3, 4, 5, 6};
    array_params(firstArray, 3);
    array_params(secondArray, 6);

    cout << END;
    return 0;
}