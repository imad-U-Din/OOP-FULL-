// Assignment 7: Date Validator and Day Counter
// Write a program to validate a date entered in DD-MM-YYYY format.
// • Use if-else to check for validity of the day, month, and year, including leap years.
// • Add logic to calculate the day of the week for the given date using a switch-case
// statement.



#include <iostream>
using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to check if the date is valid
bool isValidDate(int d, int m, int y) {
    if (y < 1 || m < 1 || m > 12 || d < 1) return false;
    
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(y)) daysInMonth[1] = 29;
    
    return d <= daysInMonth[m - 1];
}

// Function to calculate the day of the week using Zeller's Congruence formula
int getDayOfWeek(int d, int m, int y) {
    if (m < 3) {
        m += 12;
        y -= 1;
    }
    int k = y % 100;
    int j = y / 100;
    int dayOfWeek = (d + (13 * (m + 1)) / 5 + k + (k / 4) + (j / 4) + (5 * j)) % 7;
    
    return dayOfWeek;
}

// Function to print the day of the week
void printDayOfWeek(int dayOfWeek) {
    switch (dayOfWeek) {
        case 0: cout << "Saturday"; break;
        case 1: cout << "Sunday"; break;
        case 2: cout << "Monday"; break;
        case 3: cout << "Tuesday"; break;
        case 4: cout << "Wednesday"; break;
        case 5: cout << "Thursday"; break;
        case 6: cout << "Friday"; break;
        default: cout << "Invalid";
    }
}

int main() {
    int d, m, y;
    cout << "Enter date (DD MM YYYY): ";
    cin >> d >> m >> y;

    if (isValidDate(d, m, y)) {
        cout << "Valid Date\n";
        int dayOfWeek = getDayOfWeek(d, m, y);
        cout << "Day of the Week: ";
        printDayOfWeek(dayOfWeek);
        cout << endl;
    } else {
        cout << "Invalid Date\n";
    }

    return 0;
}
