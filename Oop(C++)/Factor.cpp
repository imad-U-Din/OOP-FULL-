#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int number;

    do
    {
        cout << "Enter a number to calculate its factorial (0 to exit): ";
        cin >> number;

        if (number < 0)
        {
            cout << "Please enter a non-negative number." << endl;
        }
        else if (number > 0)
        {
            int result = factorial(number);
            cout << "Factorial of " << number << " is: " << result << endl;
        }

    } while (number != 0);

    cout << "Program terminated. Thank you!" << endl;

    return 0;
}