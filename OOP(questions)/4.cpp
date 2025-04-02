// Design a generic function for finding the largest of three numbers.

#include <iostream>
using namespace std;

template <typename T>
T findLargest(T a, T b, T c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() {
    int x, y, z;
    cout << "Enter three integers: ";
    cin >> x >> y >> z;
    cout << "Largest integer: " << findLargest(x, y, z) << endl;

    double p, q, r;
    cout << "Enter three floating-point numbers: ";
    cin >> p >> q >> r;
    cout << "Largest floating-point number: " << findLargest(p, q, r) << endl;

    return 0;
}
