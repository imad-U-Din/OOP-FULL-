#include <iostream>

using namespace std;

int main()
{
    double num1, num2, result;
    char op;

    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;

    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;

    result = (op == '+') ? num1 + num2 : (op == '-') ? num1 - num2
                                     : (op == '*')   ? num1 * num2
                                     : (op == '/')   ? (num2 != 0 ? num1 / num2 : 0)
                                     : (op == '%')   ? (num2 != 0 ? (int)num1 % (int)num2 : 0)
                                                     : 0;

    if (result == 0 && op == '/')
    {
        cout << "Error: Division by zero" << endl;
    }
    else if (result == 0 && op == '%')
    {
        cout << "Error: Modulus by zero" << endl;
    }
    else if (result == 0 && op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
    {
        cout << "Invalid operator" << endl;
    }
    else
    {
        cout << "Result: " << result << endl;
    }

    return 0;
}