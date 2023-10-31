#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle(int x, int y) : width(x), height(y) {}
    int area() { return width * height; }
};

int main()
{
    Rectangle rect(3, 4);
    Rectangle *ptr1, *ptr2, *ptr3;

    ptr1 = &rect;
    ptr2 = new Rectangle (5, 6);
    ptr3 = new Rectangle[2] { {2,5}, {3,6} };

    cout << "rect's area: " << rect.area() << '\n';
    cout << "*ptr1's area: " << ptr1->area() << '\n';
    cout << "*ptr2's area: " << ptr2->area() << '\n';
    cout << "ptr3[0]'s area:" << ptr3[0].area() << '\n';
    cout << "ptr3[1]'s area:" << ptr3[1].area() << '\n';       
    delete ptr2;
    delete[] ptr3;

    return 0;
}