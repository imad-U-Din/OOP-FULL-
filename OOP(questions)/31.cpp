// Assignment 6: Do-While with Number Reversal
// Write a program that repeatedly asks the user to input a positive integer and then reverses the
// digits of the number. For example, input 1234 should output 4321. Stop the program when the
// user enters 0.



#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;
    do {
        cout << "Enter a positive number (0 to exit): ";
        cin >> num;
        if (num > 0)
            cout << "Reversed number: " << reverseNumber(num) << endl;
    } while (num != 0);

    cout << "Program exited." << endl;
    return 0;
}
