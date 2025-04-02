// Assignment 1: Complex Number Comparison
// Write a program that accepts two complex numbers (real and imaginary parts) and compares
// them.
// • Use if-else to determine which complex number has a higher magnitude.
// • Print "Equal" if they have the same magnitude.


#include <iostream>
#include <cmath>
using namespace std;

struct Complex {
    double real, imag;
};

double magnitude(Complex c) {
    return sqrt(c.real * c.real + c.imag * c.imag);
}

int main() {
    Complex c1, c2;
    cout << "Enter real and imaginary part of first complex number: ";
    cin >> c1.real >> c1.imag;
    cout << "Enter real and imaginary part of second complex number: ";
    cin >> c2.real >> c2.imag;

    double mag1 = magnitude(c1);
    double mag2 = magnitude(c2);

    if (mag1 > mag2)
        cout << "First complex number is larger.\n";
    else if (mag2 > mag1)
        cout << "Second complex number is larger.\n";
    else
        cout << "Equal\n";

    return 0;
}
