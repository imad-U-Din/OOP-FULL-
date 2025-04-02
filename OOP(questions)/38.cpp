// Assignment 3: Calculator with Conditional Operator
// Create a calculator program that takes two operands and an operator (+, -, *, /, %).
// • Use the conditional operator to implement the operations.
// • Display an error message if the operator is invalid or if a division by zero is attempted.



#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Result: ";
    cout << ((op == '+') ? num1 + num2 :
             (op == '-') ? num1 - num2 :
             (op == '*') ? num1 * num2 :
             (op == '/' ? (num2 != 0 ? num1 / num2 : (cout << "Error: Division by zero!", 0)) :
             (op == '%' ? ((int)num2 != 0 ? (int)num1 % (int)num2 : (cout << "Error: Division by zero!", 0)) :
             (cout << "Error: Invalid operator!", 0)))) << endl;

    return 0;
}
