// Assignment 4: Advanced Leap Year Checker
// Write a program that checks if a given year is a leap year.
// • Use nested if-else for the logic:
// o A year is a leap year if it is divisible by 4 but not by 100, unless divisible by 400.
// • Add logic to print the next 5 leap years if the input year is not a leap year.



#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year))
        cout << year << " is a leap year.\n";
    else {
        cout << year << " is not a leap year.\nNext 5 leap years: ";
        int count = 0;
        while (count < 5) {
            year++;
            if (isLeapYear(year)) {
                cout << year << " ";
                count++;
            }
        }
        cout << endl;
    }

    return 0;
}
