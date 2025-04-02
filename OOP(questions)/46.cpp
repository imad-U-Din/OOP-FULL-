// Assignment 11: Number Pyramid
// Create a program that generates a number pyramid like this:
//  1
//  121
//  12321
// 1234321
// • Use nested for loops to generate the pattern.
// • Allow the user to input the number of rows.


#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // Print ascending numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print descending numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
