// Write a program that takes an integer input from the user and checks if it is positive, negative, or
// zero using if, else if, and else statements. Print the result accordingly



#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num > 0)
        cout << "Positive\n";
    else if (num < 0)
        cout << "Negative\n";
    else
        cout << "Zero\n";

    return 0;
}
