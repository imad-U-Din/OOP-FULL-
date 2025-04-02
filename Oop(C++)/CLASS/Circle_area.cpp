#include <iostream>
using namespace std;

class Circle {
public:
    double radius;

    Circle(double r) {
        radius = r;
    }

    double calculateArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    Circle myCircle(r);
    cout << "Area of the circle: " << myCircle.calculateArea() << endl;
    
    return 0;
}
