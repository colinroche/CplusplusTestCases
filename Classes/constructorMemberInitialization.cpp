/*  Cylinder has a member object whose type is Circle
    Circle can only be constructed with a parameter, 
    Cylinder's constructor needs to call base's constructor, 
    Only way to do this is in the member initializer list.*/

#include <iostream>
using namespace std;

class Circle {
    double radius;
  public:
    Circle(double r) : radius(r) {}
    double area() { return radius * radius * 3.14159265; }
};

class Cylinder {
    Circle base;
    double height;
  public:
    Cylinder(double r, double h) : base(r), height(h) {}
    double volume() { return base.area() * height; }
};

int main() {
    Cylinder cyl(10, 20);

    cout << "Cylinder volume: " << cyl.volume() << "\n";
}