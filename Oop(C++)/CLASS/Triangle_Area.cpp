#include <iostream>

using namespace std;

class Triangle {
  double base;
  double height;

public:
//CONSTRUCTOR
  Triangle(double b, double h) : base(b), height(h) {
    cout << "Triangle created (" << base << ", " << height << ")\n";
  }

  double getArea() const {
    return 0.5 * base * height;
  }

  //DESTRUCTOR
  ~Triangle() {
    cout << "Triangle destroyed (" << base << ", " << height << ")\n";
  }
};

int main() {
  double base, height;

  cout << "Enter base of triangle: ";
  cin >> base;

  cout << "Enter height of triangle: ";
  cin >> height;

  Triangle t1(base, height);
  cout << "Area: " << t1.getArea() << "\n";

  return 0;
}