#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 5 == 0)
    {
        cout << "The number is divisible by 5";
    }
    else
    {
        cout << "The number is not divisible by 5";
    }
}