// 9. Using this Pointer in a Class - Basic Arithmetic Operations
// • Define a Calculator class with attributes num1 and num2.
// • Implement a function setValues() .
// • Implement functions add(), subtract(), multiply(), and divide()


#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    // Function to set values using 'this' pointer
    Calculator* setValues(double n1, double n2) {
        this->num1 = n1;
        this->num2 = n2;
        return this; // Returning pointer to the current object
    }

    // Addition
    double add() {
        return num1 + num2;
    }

    // Subtraction
    double subtract() {
        return num1 - num2;
    }

    // Multiplication
    double multiply() {
        return num1 * num2;
    }

    // Division (Returns 0 if num2 is 0)
    double divide() {
        return (num2 != 0) ? (num1 / num2) : 0;
    }
};

int main() {
    Calculator calc;
    double a, b;

    // Taking input from the user
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Setting values using method chaining
    calc.setValues(a, b);

    // Performing operations and displaying results
    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;

    // Handling division separately to avoid mixed types in the ternary operator
    if (b != 0)
        cout << "Division: " << calc.divide() << endl;
    else
        cout << "Division: Undefined (Division by zero)" << endl;

    return 0;
}
