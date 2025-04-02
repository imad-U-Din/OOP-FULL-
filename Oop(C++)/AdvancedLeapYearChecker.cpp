#include <iostream>

using namespace std;

int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;

        cout << "Next 5 leap years:" << endl;
        int count = 5;
        year++;
        while (count > 0)
        {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                cout << year << endl;
                count--;
            }
            year++;
        }
    }

    return 0;
}