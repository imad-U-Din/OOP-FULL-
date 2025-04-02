// Program 4: Recursive Function for Factorial
// Problem: Write a recursive function factorial(int n) that computes the factorial of a
// number. Call this function from main() and test it with different inputs.


#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial: " << factorial(num) << endl;
    return 0;
}
