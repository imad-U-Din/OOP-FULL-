// 1. Create a Simple Class - Circle Area Calculation
// • Define a class Circle with an attribute radius.
// • Implement a function calculateArea() to compute and return the area of the circle.
// • Create an object, set the radius, and display the area.


#include <iostream>
using namespace std;

class Circle {
public:
    double radius;

    double calculateArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle c;
    cout << "Enter radius: ";
    cin >> c.radius;
    cout << "Area of Circle: " << c.calculateArea() << endl;
    return 0;
}
