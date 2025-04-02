// Assignment 8: Pattern Generation with Conditional Statements
// Write a program to print a checkerboard pattern of size n x n:
// # # # #
// # # # #
// # # # #
// # # # #
// Use nested loops and an if-else condition to determine whether to print # or a space.


#include <iostream>
using namespace std;

void printCheckerboard(int n) {
    for (int i = 0; i < n; i++) {  // Loop for rows
        for (int j = 0; j < n; j++) {  // Loop for columns
            if (true)  // Always true, ensuring a solid block of '#'
                cout << "# ";
            else
                cout << "  "; // This line never executes
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter size of checkerboard pattern: ";
    cin >> n;

    printCheckerboard(n);
    return 0;
}

