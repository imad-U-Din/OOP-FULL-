#include <iostream>

using namespace std;

class Rectangle {
private:
  double length;
  double width;

public:
  // Default Constructor
  Rectangle() : length(10), width(20) {
    cout << "Default constructor called. Rectangle created with length = " << length
         << " and width = " << width << endl;
  }

  // Parameterized Constructor
  Rectangle(double l, double w) : length(l), width(w) {
    cout << "Parameterized constructor called. Rectangle created with length = " << length
         << " and width = " << width << endl;
  }

  double calculatePerimeter() const {
    return 2 * (length + width);
  }
};

int main() {
  // Using the default constructor
  Rectangle r1;
  cout << "Perimeter of r1: " << r1.calculatePerimeter() << endl;

  // Using the parameterized constructor
  Rectangle r2(5, 10);
  cout << "Perimeter of r2: " << r2.calculatePerimeter() << endl;


  return 0;
}