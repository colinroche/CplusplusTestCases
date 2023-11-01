/*  member of the abstract base class can use the special pointer this 
    to access the proper virtual members, 
    even though Polygon itself has no implementation for this function*/


// pure virtual members can be called
// from the abstract base class
#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int x, int y)
      { width = x; height = y; }
    virtual int area() = 0;
    void printarea()
      { cout << this->area() << '\n'; }
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

  ppoly1->set_values(4,5);
  ppoly2->set_values(4,5);

  ppoly1->printarea();
  ppoly2->printarea();

  return 0;
}