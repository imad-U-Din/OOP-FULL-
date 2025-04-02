// Write a program that takes two integers and a character representing an operation (+, -, *, /) as
// input from the user and uses a switch statement to perform the appropriate arithmetic operation
// and print the result.


#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+': cout << "Result: " << a + b << endl; break;
        case '-': cout << "Result: " << a - b << endl; break;
        case '*': cout << "Result: " << a * b << endl; break;
        case '/': 
            if (b != 0) cout << "Result: " << a / b << endl;
            else cout << "Division by zero error\n";
            break;
        default: cout << "Invalid operator\n";
    }

    return 0;
}
