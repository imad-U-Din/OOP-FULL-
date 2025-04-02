// 3. Constructor and Destructor in a Class - Triangle Area Calculation
// • Define a Triangle class with a constructor to initialize base and height.
// • Implement a function calculateArea() using the formula:
// 0.5 x base x height
// • Implement a destructor to display a message when an object is destroyed.


#include <iostream>
using namespace std;

class Triangle {
private:
    double base, height;
public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }
    
    double calculateArea() {
        return 0.5 * base * height;
    }

    ~Triangle() {
        cout << "Triangle object destroyed." << endl;
    }
};

int main() {
    double b, h;
    cout << "Enter base and height: ";
    cin >> b >> h;
    Triangle t(b, h);
    cout << "Area of Triangle: " << t.calculateArea() << endl;
    return 0;
}
