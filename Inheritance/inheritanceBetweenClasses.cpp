// declared classes

#include <iostream>
using namespace std;

class Polygon {
    protected:
        int width, height;
    public:
        void set_values(int x, int y) 
        { width = x; height = y;}
};

class Rectangle: public Polygon {
    public:
        int area() {
            return width * height;
        }
};

class Triangle: public Polygon {
    public:
        int area() {
            return (width * height) / 2;
        }
};

int main()
{
    Rectangle rect;
    Triangle tri;

    rect.set_values(2, 4);
    tri.set_values(2, 4);

    cout << "Rectangle Area: " << rect.area() << '\n';
    cout << "Triangle Area: " << tri.area() << '\n';

    return 0;
}