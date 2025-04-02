// 4. Parameterized Constructor and Default Constructor - Perimeter of a
// Rectangle
// • Create a Rectangle class with attributes length and width.
// • Implement a default constructor that initializes values to zero.
// • Implement a parameterized constructor to accept values.
// • Calculate and display the perimeter using calculatePerimeter().


#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width; // Attributes

public:
    // Default Constructor (initializes length and width to zero)
    Rectangle() {
        length = 0;
        width = 0;
    }

    // Parameterized Constructor (accepts values)
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Function to calculate the perimeter
    double calculatePerimeter() {
        return 2 * (length + width);
    }

    // Function to display values
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() {
    // Using Default Constructor
    Rectangle r1;
    cout << "Default Constructor:" << endl;
    r1.display();

    // Using Parameterized Constructor
    double l, w;
    cout << "\nEnter length and width: ";
    cin >> l >> w;
    
    Rectangle r2(l, w);
    cout << "Parameterized Constructor:" << endl;
    r2.display();

    return 0;
}
