// Assignment 3: Switch Statement with Functions
// Create a simple calculator using a switch statement. The program should ask the user to input
// two numbers and a choice of operation (+, -, *, /, %). Implement each operation in a separate
// function and call the appropriate function based on the user's input.



#include <iostream>
using namespace std;

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return (b != 0) ? a / b : 0; }
int mod(int a, int b) { return (b != 0) ? a % b : 0; }

int main() {
    double num1, num2;
    char op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;

    switch (op) {
        case '+': cout << "Result: " << add(num1, num2) << endl; break;
        case '-': cout << "Result: " << subtract(num1, num2) << endl; break;
        case '*': cout << "Result: " << multiply(num1, num2) << endl; break;
        case '/': 
            if (num2 != 0)
                cout << "Result: " << divide(num1, num2) << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        case '%': 
            if ((int)num1 == num1 && (int)num2 == num2)
                cout << "Result: " << mod((int)num1, (int)num2) << endl;
            else
                cout << "Error! Modulus operator requires integers." << endl;
            break;
        default: cout << "Invalid operator!" << endl;
    }

    return 0;
}
