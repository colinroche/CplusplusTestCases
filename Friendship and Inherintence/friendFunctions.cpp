/*  non-member function can access the private/protected members of a class 
    if declared as friend of that class*/

/*  include declaration of this external function within the class, 
    precede it with the keyword friend*/

#include <iostream>
using namespace std;

class Rectangle {
        int width, height;
    public:
        Rectangle() {}
        Rectangle(int x, int y) : width(x), height(y) {}
        int area() { return width * height; }
        friend Rectangle duplicate(const Rectangle&);
};

Rectangle duplicate(const Rectangle& param) {
    Rectangle dup;
    dup.width = param.width * 2;
    dup.height = param.height * 2;
    return dup;
}

int main()
{
    Rectangle rect;
    Rectangle rect2(2, 4);

    rect = duplicate(rect2);

    cout << "First Rectangle: " << rect.area() << '\n';
    cout << "Second Rectangle: " << rect2.area() << '\n';

    return 0;
}