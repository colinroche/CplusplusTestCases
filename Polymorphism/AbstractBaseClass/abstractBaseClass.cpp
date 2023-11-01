// abstract base class - at least 1 pure virtual function
#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int x, int y)
      { width = x; height = y; }
    // pure virtual function (=0)
    virtual int area (void) = 0;
};

class Rectangle: public Polygon {
  public:
    int area (void) { return (width * height); }
};

class Triangle: public Polygon {
  public:
    int area (void) { return (width * height / 2); }
};

int main () {
  Rectangle rect;
  Triangle tri;

  Polygon * ppoly1 = &rect;
  Polygon * ppoly2 = &tri;

  ppoly1->set_values (4,5);
  ppoly2->set_values (4,5);

  cout << ppoly1->area() << '\n';
  cout << ppoly2->area() << '\n';

  return 0;
}