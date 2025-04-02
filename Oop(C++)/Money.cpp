#include <iostream>
using namespace std;

int main()
{
    double amount, rate;
    int years;

    cout << "Enter initial amount: ";
    cin >> amount;
    cout << "Enter number of years: ";
    cin >> years;
    cout << "Enter interest rate (percent per year): ";
    cin >> rate;

    rate = rate / 100;

    for (int i = 1; i <= years; i++)
    {
        amount += amount * rate;
        cout << "Year " << i << ": " << int(amount * 100) / 100.0 << endl;
    }

    cout << "At the end of " << years << " years, you will have "
         << int(amount * 100) / 100.0 << " rupees." << endl;

    return 0;
}