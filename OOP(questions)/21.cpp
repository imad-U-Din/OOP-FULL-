// Program 3: Function with Pass by Value and Reference
// Problem: Create two functions:
// 1. squareValue(int num) → Returns the square of num (pass by value).
// 2. squareReference(int &num) → Modifies num to its square (pass by reference).
// Call both functions from main() and observe the differences.


#include <iostream>
using namespace std;

int squareValue(int num) {  // Pass by value
    return num * num;
}

void squareReference(int &num) {  // Pass by reference
    num *= num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Square (pass by value): " << squareValue(num) << endl;

    squareReference(num);
    cout << "Square (pass by reference): " << num << endl;

    return 0;
}
