#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double real1, imag1, real2, imag2;

    cout << "Enter the real and imaginary parts of the first number: ";
    cin >> real1 >> imag1;

    cout << "Enter the real and imaginary parts of the second number: ";
    cin >> real2 >> imag2;

    double mag1 = sqrt(real1 * real1 + imag1 * imag1);
    double mag2 = sqrt(real2 * real2 + imag2 * imag2);

    if (mag1 > mag2)
    {
        cout << "The first number is larger." << endl;
    }
    else if (mag2 > mag1)
    {
        cout << "The second number is larger." << endl;
    }
    else
    {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}