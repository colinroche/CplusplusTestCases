// pointer to a derived class is type-compatible with a pointer to its base class

// pointers to base class
#include <iostream>
using namespace std;

class Polygon {
    protected:
        int width, height;
    public:
        void set_values(int x, int y) 
        { width = x; height = y; }
};

class Rectangle: public Polygon {
    public:
        int area() { return width * height; }
};

class Triangle: public Polygon {
    public:
        int area() { return (width * height) / 2; }
};

int main()
{
    Rectangle rect;
    Triangle tri;
    Polygon * ppoly1 = &rect;
    Polygon * ppoly2 = &tri;

    ppoly1->set_values(4, 5);
    ppoly2->set_values(4, 5);

    cout << rect.area() << '\n';
    cout << tri.area() << '\n';

    return 0;
}