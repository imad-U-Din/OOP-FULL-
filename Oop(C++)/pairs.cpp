#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Pairs (x, y) such that x^2 + y^2 = " << n << ":" << endl;

    int limit = sqrt(n);
    for (int x = 0; x <= limit; x++) {
        for (int y = 0; y <= limit; y++) {
            if (x * x + y * y > n) {
                break; 
            }
            if (x * x + y * y == n) {
                cout << "(" << x << ", " << y << ")" << endl;
                continue; 
            }
        }
    }

    return 0;
}
