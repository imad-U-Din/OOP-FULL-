#include <iostream>
using namespace std;

int squareValue(int num) {
    return num * num;
}

void squareReference(int &num) {
    num = num * num;
}

int main() {
    int a = 5, b = 6;

    cout << "Square of " << a << " (pass by value): " << squareValue(a) << endl;

    squareReference(b);
    cout << "Square of b after pass by reference: " << b << endl;

    return 0;
}
