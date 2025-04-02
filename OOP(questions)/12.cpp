// Write a program that takes a number between 1 and 7 from the user and uses a switch statement
// to print the corresponding day of the week (1 for Monday, 2 for Tuesday, etc.). Print "Invalid
// input" if the number is not between 1 and 7.



#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number (1-7): ";
    cin >> num;

    switch (num) {
        case 1: cout << "Monday\n"; break;
        case 2: cout << "Tuesday\n"; break;
        case 3: cout << "Wednesday\n"; break;
        case 4: cout << "Thursday\n"; break;
        case 5: cout << "Friday\n"; break;
        case 6: cout << "Saturday\n"; break;
        case 7: cout << "Sunday\n"; break;
        default: cout << "Invalid number\n";
    }

    return 0;
}
