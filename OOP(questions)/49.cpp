// 2. Class with Private Data Members and Getter/Setter Functions - Rectangle
// Area Calculation
// • Create a Rectangle class with private attributes length and width.
// • Implement setter and getter functions.
// • Calculate and display the area using calculateArea().


#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width; // Private attributes

public:
    // Setter functions
    void setLength(double l) { length = l; }
    void setWidth(double w) { width = w; }

    // Getter functions
    double getLength() { return length; }
    double getWidth() { return width; }

    // Function to calculate the area
    double calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle r;
    double l, w;

    // Taking user input
    cout << "Enter length and width: ";
    cin >> l >> w;

    // Setting values
    r.setLength(l);
    r.setWidth(w);

    // Displaying area
    cout << "Area of Rectangle: " << r.calculateArea() << endl;

    return 0;
}
