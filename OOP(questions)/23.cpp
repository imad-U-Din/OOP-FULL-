// Program 5: Function Returning an Array (Using Pointers)
// Problem: Implement a function generateEvenNumbers(int n) that returns an array of the first
// n even numbers.
// Use dynamic memory allocation (new keyword).
// Call the function from main() and display the array elements.


#include <iostream>
using namespace std;

int* generateEvenNumbers(int n) {
    int* arr = new int[n];  // Dynamic memory allocation
    for (int i = 0; i < n; i++) {
        arr[i] = 2 * (i + 1);
    }
    return arr;
}

int main() {
    int n;
    cout << "Enter the number of even numbers to generate: ";
    cin >> n;

    int* evenNumbers = generateEvenNumbers(n);

    cout << "First " << n << " even numbers: ";
    for (int i = 0; i < n; i++) {
        cout << evenNumbers[i] << " ";
    }
    cout << endl;

    delete[] evenNumbers;  // Free allocated memory
    return 0;
}
