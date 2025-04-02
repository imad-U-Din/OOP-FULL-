// Program 1: Basic Function Definition
// Problem: Write a C++ program that defines a function sum(int a, int b) that takes two
// integers as arguments and returns their sum. Call this function from main() and display the
// result.



#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Sum: " << sum(x, y) << endl;
    return 0;
}
