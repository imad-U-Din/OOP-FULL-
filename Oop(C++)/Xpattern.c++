#include <iostream>
using namespace std;

int main()
{
    int height = 20;

    for (int i = 1; i <= height; ++i)
    {
        for (int j = 1; j <= height - i; ++j)
        {
            cout << " ";
        }

        for (int k = 1; k <= (2 * i - 1); ++k)
        {
            cout << "X";
        }

        cout << endl;
    }

    return 0;
}