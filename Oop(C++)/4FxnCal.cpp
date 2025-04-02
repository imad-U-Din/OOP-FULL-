#include <iostream>
using namespace std;

int main()
{
    char continueCalculation;

    do
    {
        double firstNumber, secondNumber, result;
        char operatorChoice;

        cout << "Enter first number, operator, second number: ";
        cin >> firstNumber >> operatorChoice >> secondNumber;

        switch (operatorChoice)
        {
        case '+':
            result = firstNumber + secondNumber;
            cout << "Result = " << result << endl;
            break;
        case '-':
            result = firstNumber - secondNumber;
            cout << "Result = " << result << endl;
            break;
        case '*':
            result = firstNumber * secondNumber;
            cout << "Result = " << result << endl;
            break;
        case '/':
            if (secondNumber != 0)
            {
                result = firstNumber / secondNumber;
                cout << "Result = " << result << endl;
            }
            else
            {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
        }

        cout << "Do another calculation (y/n)? ";
        cin >> continueCalculation;
    } while (continueCalculation == 'y' || continueCalculation == 'Y');

    cout << "Thank you for using this calculator!" << endl;

    return 0;
}
