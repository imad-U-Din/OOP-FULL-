// Assignment 1: If-Else with Logical Operators
// Write a program that checks whether a given year is a leap year. A year is a leap year if:
// • It is divisible by 4,
// • But not divisible by 100,
// • Unless it is also divisible by 400.
// The program should handle invalid inputs gracefully.



#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year < 0) {
        cout << "Invalid input! Year cannot be negative." << endl;
        return false;
    }
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year))
        cout << year << " is a Leap Year." << endl;
    else
        cout << year << " is NOT a Leap Year." << endl;

    return 0;
}
