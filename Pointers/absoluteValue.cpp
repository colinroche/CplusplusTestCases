#include <stdio.h>
#include <iostream>
using namespace std;

void update(int *a,int *b) {
    // Complete this function   
    int *x, *y;
    x = a;
    y = b; 
    
    *a = *x + *y;
    //*b = std::abs(*x - *y);
    *b = *x - *y;
    //*b -= (*b<0) * (*b) *2;
    
    //*b = *b - ((*b<0) * (*b) * 2);

    *b = *b < 0 ?  -*b: *b;
}

int main() {
    int a, b;
    a = 10;
    b = 15;
    int *pa = &a, *pb = &b;

    update(pa, pb);
    //printf("%d\n%d", a, b);

    cout << a << " " << b;

    return 0;
}
