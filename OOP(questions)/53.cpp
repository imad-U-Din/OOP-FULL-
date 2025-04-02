// 6. Overloading Constructor in a Class - Area of Circle and Rectangle
// • Define a Shape class with a default constructor and an overloaded constructor.
// • If radius is given, calculate the area of a circle.
// • If length and breadth are given, calculate the area of a rectangle.



#include <iostream>
using namespace std;

class Shape {
private:
    double radius, length, breadth;

public:
    // Default Constructor (No shape defined)
    Shape() {
        radius = 0;
        length = 0;
        breadth = 0;
    }

    // Overloaded Constructor for Circle (area = π * r²)
    Shape(double r) {
        radius = r;
        length = 0;
        breadth = 0;
    }

    // Overloaded Constructor for Rectangle (area = length * breadth)
    Shape(double l, double b) {
        length = l;
        breadth = b;
        radius = 0;
    }

    // Function to calculate and display area
    void calculateArea() {
        if (radius > 0) {
            cout << "Circle Area: " << 3.14159 * radius * radius << endl;
        } else if (length > 0 && breadth > 0) {
            cout << "Rectangle Area: " << length * breadth << endl;
        } else {
            cout << "No valid shape provided." << endl;
        }
    }
};

int main() {
    // Circle object
    double r, l, b;
    cout << "Enter radius of the circle: ";
    cin >> r;
    Shape circle(r);
    circle.calculateArea();

    // Rectangle object
    cout << "\nEnter length and breadth of the rectangle: ";
    cin >> l >> b;
    Shape rectangle(l, b);
    rectangle.calculateArea();

    return 0;
}
