// dynamic allocation and polymorphism
#include <iostream>
using namespace std;

class Polygon {
    protected:
        int width, height;
    public:
        Polygon(int x, int y) : width(x), height(y) {}
        virtual int area(void) = 0;
        void printarea()
            { cout << this->area() << '\n'; }
};

class Rectangle: public Polygon {
    public:
        Rectangle(int x, int y) : Polygon(x, y) {}
        int area() { return width * height; }
};

class Triangle: public Polygon {
    public:
        Triangle(int x, int y) : Polygon(x, y) {}
        int area() { return width * height / 2; }
};

int main () {
    Polygon * ppoly1 = new Rectangle (4,5);
    Polygon * ppoly2 = new Triangle (4,5);

    ppoly1->printarea();
    ppoly2->printarea();

    delete ppoly1;
    delete ppoly2;
    
    return 0;
}