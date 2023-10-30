#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
      Rectangle();
      Rectangle(int, int);
      int area() {return width*height;}
};

Rectangle::Rectangle() {
    width = 2;
    height = 4;
}

Rectangle::Rectangle(int x, int y) {
    width = x;
    height = y;
}

int main() {
    Rectangle rect_1;
    Rectangle rect_2(3, 6);

    cout << " First Rectangle's Area: " << rect_1.area() << endl;
    cout << " Second Rectangle's Area: " << rect_2.area() << endl;

    return 0;
}