// Assignment 5: While Loop with Prime Numbers
// Write a program that accepts a number n and prints all prime numbers less than or equal to n.
// Use a while loop and a function to check if a number is prime.

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers up to " << n << ": ";
    int i = 2;
    while (i <= n) {
        if (isPrime(i)) {
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
    return 0;
}
