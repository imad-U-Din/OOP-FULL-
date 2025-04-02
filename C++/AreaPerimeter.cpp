#include <iostream>
using namespace std;
int main()
{
    int L, B;

    cout << "Enter Length of a rectangle: ";
    cin >> L;

    cout << "Enter Breadth of a rectangle: ";
    cin >> B;

    int Area = L * B;
    int Perimeter = 2 * (L + B);

    if (Area > Perimeter)
    {
        cout << "Area is greater than perimeter";
    }
    if (Area < Perimeter)
    {
        cout << "Perimeter is greater than Area ";
    }
}