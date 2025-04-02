// 7. Class with Function Returning Object - Adding Two Complex Numbers
// • Define a Complex class with attributes real and imaginary.
// • Implement a function addComplex() that takes another Complex object and returns a
// new Complex object with the sum of two complex numbers.
// • Display the result.



#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;

public:
    // Constructor to initialize complex number
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    // Function to add two complex numbers and return a new Complex object
    Complex addComplex(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Function to display complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    double r1, i1, r2, i2;

    // Taking input for first complex number
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> r1 >> i1;
    Complex c1(r1, i1);

    // Taking input for second complex number
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> r2 >> i2;
    Complex c2(r2, i2);

    // Adding two complex numbers
    Complex sum = c1.addComplex(c2);

    // Displaying the result
    cout << "Sum of complex numbers: ";
    sum.display();

    return 0;
}
