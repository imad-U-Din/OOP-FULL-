#include <iostream>
using namespace std;

int main()
{
    int option;
    float tempInput, tempOutput;

    cout << "Enter 1 to convert Fahrenheit to Celsius.\n"
         << "Enter 2 to convert Celsius to Fahrenheit." << endl
         << "Enter your choice:";
    cin >> option;

    if (option == 1)
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> tempInput;
        tempOutput = (tempInput - 32) * 5 / 9;
        cout << "The temperature in Celsius is: " << tempOutput << endl;
    }
    else if (option == 2)
    {
        cout << "Enter temperature in Celsius: ";
        cin >> tempInput;
        tempOutput = (tempInput * 9 / 5) + 32;
        cout << "The temperature in Fahrenheit is: " << tempOutput << endl;
    }
    else
    {
        cout << "Invalid option. Choose either 1 or 2." << endl;
    }

    return 0;
}
