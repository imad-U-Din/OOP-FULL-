// Assignment 12: Sum of Digits
// Write a program that computes the sum of the digits of an integer.
// • Use a while loop to extract and sum the digits.
// • Extend it to find the product of digits as well.

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, product = 1, digit;
    
    cout << "Enter an integer: ";
    cin >> num;

    int temp = num; // Store original number for processing

    while (temp > 0) {
        digit = temp % 10;  // Extract last digit
        sum += digit;       // Add to sum
        product *= digit;   // Multiply for product
        temp /= 10;         // Remove last digit
    }

    cout << "Sum of digits: " << sum << endl;
    cout << "Product of digits: " << product << endl;

    return 0;
}
