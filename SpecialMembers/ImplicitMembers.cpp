// default and delete implicit members
#include <iostream>
using namespace std;

class Rectangle {
        int width, height;
    public:
        Rectangle(int x, int y) : width(x), height(y) {}
        Rectangle() = default;
        Rectangle(const Rectangle& other) = delete;
        int area() { return width * height; }
};

int main()
{
    
    Rectangle rect;
    Rectangle rect2(10, 20);

    //Rectangle rect3(rect); // copy constructor deleted error

    cout << "Second rectangle area: " << rect2.area() << '\n';
    return 0;
}