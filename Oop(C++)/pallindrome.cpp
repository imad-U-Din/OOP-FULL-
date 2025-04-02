#include <iostream>
using namespace std;
int main()
{
    int n, r, a = 0;

    cout << "Enter a number: ";
    cin >> n;
    int b = n;
    while (n != 0)
    {
        r = n % 10;
        a = r + a * 10;
        n /= 10;
    }
    if (b == a)
    {
        cout << "Pallindrome";
    }
    else
    {
        cout << "Not a pallindrome";
    }
    return 0;
}