// Assignment 2: Overloading the Unary - Operator
// Create a class Vector with two integer attributes (x, y). Overload the unary - operator to negate
// both coordinates and print the result.


#include <iostream>
using namespace std;

class Vector {
    int x, y;

public:
    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    Vector operator-() {
        return Vector(-x, -y);
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v1(4, -3), v2;
    v2 = -v1;
    cout << "Negated Vector: ";
    v2.display();
    return 0;
}
