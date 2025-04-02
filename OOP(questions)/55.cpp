// 8. Copy Constructor Implementation - Distance between Two Points
// • Create a Point class with attributes x and y.
// • Implement a copy constructor to initialize an object from another object.
// • Implement a function calculateDistance(Point p2) using the formula: 




#include <iostream>
#include <cmath> // For sqrt() function
using namespace std;

class Point {
private:
    double x, y;

public:
    // Default constructor
    Point(double x_val = 0, double y_val = 0) {
        x = x_val;
        y = y_val;
    }

    // Copy constructor
    Point(const Point &p) {
        x = p.x;
        y = p.y;
    }

    // Function to calculate distance from another point
    double calculateDistance(Point p2) {
        return sqrt(pow(p2.x - x, 2) + pow(p2.y - y, 2));
    }

    // Display function
    void display() {
        cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    double x1, y1, x2, y2;

    // Taking input for first point
    cout << "Enter x and y coordinates of first point: ";
    cin >> x1 >> y1;
    Point p1(x1, y1);

    // Taking input for second point
    cout << "Enter x and y coordinates of second point: ";
    cin >> x2 >> y2;
    Point p2(x2, y2);

    // Copy constructor demonstration
    Point p3 = p1; // Copying p1 to p3

    // Calculating distance
    double distance = p1.calculateDistance(p2);

    // Displaying results
    cout << "First Point: ";
    p1.display();
    cout << "\nSecond Point: ";
    p2.display();
    cout << "\nCopied Point (p3 from p1): ";
    p3.display();
    cout << "\nDistance between points: " << distance << endl;

    return 0;
}
