/*  virtual member is a member function that can be redefined in a derived class, 
    while preserving its calling properties through references*/

#include <iostream>
using namespace std;

class Polygon {
    protected:
        int width, height;
    public:
        void set_values(int x, int y)
            { width = x; height = y; }
        virtual int area() { return 0; }
};

class Rectangle: public Polygon {
    public:
        int area() { return width * height; }
};

class Triangle: public Polygon {
    public:
        int area() { return (width * height) / 2; }
};

int main() {
    Rectangle rect;
    Triangle tri;
    Polygon poly;

    Polygon * ppoly1 = &rect;
    Polygon * ppoly2 = &tri;
    Polygon * ppoly3 = &poly;

    ppoly1->set_values(4, 5);
    ppoly2->set_values(4, 5);
    ppoly3->set_values(4, 5);

    cout << ppoly1->area() << '\n';
    cout << ppoly2->area() << '\n';
    cout << ppoly3->area() << '\n';

    return 0;
}