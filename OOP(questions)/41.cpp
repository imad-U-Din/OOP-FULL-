// Assignment 6: Quadratic Equation Solver
// Write a program to solve a quadratic equation (ax^2 + bx + c = 0).
// • Use nested if-else to classify the roots as real and distinct, real and equal, or imaginary.
// • Use conditional operators to check if the coefficients are valid (non-zero a).



#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d, root1, root2;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Invalid equation.\n";
        return 0;
    }

    d = b * b - 4 * a * c;
    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        cout << "Real and Distinct Roots: " << root1 << ", " << root2 << endl;
    } else if (d == 0) {
        root1 = -b / (2 * a);
        cout << "Real and Equal Roots: " << root1 << endl;
    } else {
        cout << "Imaginary Roots\n";
    }
    return 0;
}
