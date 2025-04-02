// 5. Class with Multiple Objects - Volume Calculation of Cubes
// • Define a Cube class with an attribute side.
// • Implement a function calculateVolume() using the formula:
// Volume=side^3
// • Create multiple objects with different side values and display their volumes






#include <iostream>
using namespace std;

class Cube {
public:
    double side;

    double calculateVolume() {
        return side * side * side;
    }
};

int main() {
    Cube c1, c2;
    cout << "Enter side for first cube: ";
    cin >> c1.side;
    cout << "Enter side for second cube: ";
    cin >> c2.side;

    cout << "Volume of first cube: " << c1.calculateVolume() << endl;
    cout << "Volume of second cube: " << c2.calculateVolume() << endl;

    return 0;
}
