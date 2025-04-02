// Create a program that takes two integer inputs and an arithmetic operator (+, -, *, /) from the
// user, then performs the corresponding operation. Use if, else if, and else statements to
// handle each case and print the result.


#include <iostream>
using namespace std;

int main() {
    char op;
    cout << "Enter an arithmetic operator (+, -, *, /): ";
    cin >> op;

    if (op == '+' || op == '-' || op == '*' || op == '/')
        cout << "Valid operator\n";
    else
        cout << "Invalid operator\n";

    return 0;
}
