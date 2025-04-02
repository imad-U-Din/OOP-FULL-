#include <iostream>
using namespace std;

class Vector {
private:
    int x, y;

public:
    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    // Overloading the unary - operator
    Vector operator-() {
        return Vector(-x, -y);
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v1(5, -3);
    Vector v2 = -v1; // Using overloaded unary - operator
    
    cout << "Negated Vector: ";
    v2.display();
    
    return 0;
}
