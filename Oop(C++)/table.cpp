#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i <= 200; i++) {
        cout << number * i << " ";

        if (i % 10 == 0) {
            cout << endl;
        }
    }

    return 0;
}
