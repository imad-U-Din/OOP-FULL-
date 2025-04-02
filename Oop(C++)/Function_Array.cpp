#include <iostream>
using namespace std;

int* generateEvenNumbers(int n) {
    int* arr = new int[n]; 

    for (int i = 0; i < n; i++) {
        arr[i] = 2 * (i + 1); 
    }

    return arr; 
}

int main() {
    int n;
    cout << "Enter the number of even numbers to generate: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive number." << endl;
        return 1;
    }

    int* evenNumbers = generateEvenNumbers(n); 

    cout << "First " << n << " even numbers: ";
    for (int i = 0; i < n; i++) {
        cout << evenNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}
