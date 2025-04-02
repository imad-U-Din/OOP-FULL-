// Write a program that takes an integer from the user representing the month (1 for January, 2 for
//     February, etc.) and uses a switch statement to print the number of days in that month. Consider
//     leap year (assume it is a leap year if February is chosen) and handle it with an additional check.


#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 days\n"; break;
        case 4: case 6: case 9: case 11:
            cout << "30 days\n"; break;
        case 2:
            cout << "28 or 29 days (leap year consideration)\n"; break;
        default:
            cout << "Invalid month\n";
    }

    return 0;
}
