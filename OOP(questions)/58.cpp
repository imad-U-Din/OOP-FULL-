// Assignment 1: Overloading the + Operator for Complex Numbers
// Write a C++ program that defines a class Complex with two integer attributes (real, imag).
// Overload the + operator to add two complex numbers and display the result.


#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(2, 5), c3;
    c3 = c1 + c2;
    cout << "Sum of Complex Numbers: ";
    c3.display();
    return 0;
}
