// Assignment 4: For Loop with Advanced Patterns
// Write a program that generates the following pyramid pattern for a given number of rows n:
// markdown
// Copy code
//      1
//     1 2
//    1 2 3
//   1 2 3 4
//  1 2 3 4 5
// Use nested loops and appropriate spacing for alignment.



#include <iostream>
using namespace std;

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    printPyramid(n);

    return 0;
}
