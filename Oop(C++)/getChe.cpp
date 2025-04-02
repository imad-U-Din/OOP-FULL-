#include <iostream>
using namespace std;

int main()
{
    long int number = 0;
    char ch;

    cout << "Enter a number: ";

    for (int i = 0; i < 6; i++)
    {
        ch = cin.get();

        if (ch >= '0' && ch <= '9')
        {
            number = number * 10 + (ch - '0');
        }
        else
        {
            break;
        }
    }

    cout << "Number is: " << number << endl;

    return 0;
}
