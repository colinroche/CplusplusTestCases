#include <iostream>

using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values(int, int);
    int area(void) { return width * height; }
};

void Rectangle::set_values(int x, int y) {
    width = x;
    height = y;
}

int main() {
    Rectangle rect_1, rect_2;
    rect_1.set_values(2, 4);
    rect_2.set_values(3, 6);

    cout << "Area of first rectangle: " << rect_1.area() << "\n";
    cout << "Area of second rectangle: " << rect_2.area() << "\n";

    return 0;
}