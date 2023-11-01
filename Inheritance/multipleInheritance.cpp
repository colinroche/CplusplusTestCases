// multiple inheritance
#include <iostream>
using namespace std;

class Polygon {
    protected:
        int width, height;
    public:
        Polygon(int x, int y) : width(x), height(y) {}
};

class Output {
    public:
        static void print(int i);
};

void Output::print(int i) {
    cout << i << '\n';
}

class Rectangle: public Polygon, public Output {
    public:
        Rectangle(int x, int y) : Polygon(x, y) {}
        int area() {
            return width * height;
        }
};

class Triangle: public Polygon, public Output {
    public:
        Triangle(int x, int y) : Polygon(x, y) {}
        int area() {
            return (width * height) / 2;
        }
};

int main() {
    Rectangle rect(4, 5);
    Triangle tri(4, 5);

    rect.print(rect.area());
    Triangle::print(tri.area());
    
    return 0;
}