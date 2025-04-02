// Create a class by name date with the member data as day, month and year.
// Perform the following:
// ● Overload all relational operators <, <=, >, >=, ==, =
// ● Overload ++ operator to increment a date by one day
// ● Overload + to add given number of days to find the next date
// ● Provide the necessary function to use the statement like days=dt; where days is an int variable and dt is an object of date class.
// The statement is intended to assign the number of days elapsed in the current year of the date to the variable days. Note that
// this is a case of conversion from derived type to basic type.


#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    // Function to initialize the date
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Display function
    void display() {
        cout << day << "/" << month << "/" << year << endl;
    }

    // Overload relational operators (returning 1 for true, 0 for false)
    int operator<(Date d) { return (year < d.year) || (year == d.year && month < d.month) || (year == d.year && month == d.month && day < d.day); }
    int operator>(Date d) { return (year > d.year) || (year == d.year && month > d.month) || (year == d.year && month == d.month && day > d.day); }
    int operator<=(Date d) { return !(*this > d); }
    int operator>=(Date d) { return !(*this < d); }
    int operator==(Date d) { return (day == d.day && month == d.month && year == d.year); }

    // Overload assignment operator
    Date operator=(Date d) {
        day = d.day;
        month = d.month;
        year = d.year;
        return *this;
    }

    // Overload ++ to increment date by one day
    Date operator++() {
        int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        day++;
        if (day > daysInMonth[month - 1]) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
        return *this;
    }

    // Overload + to add days to the date
    Date operator+(int days) {
        Date temp = *this;
        int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        while (days--) {
            temp.day++;
            if (temp.day > daysInMonth[temp.month - 1]) {
                temp.day = 1;
                temp.month++;
                if (temp.month > 12) {
                    temp.month = 1;
                    temp.year++;
                }
            }
        }
        return temp;
    }

    // Convert date to int (days elapsed in the year)
    operator int() {
        int daysElapsed = day;
        int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for (int i = 0; i < month - 1; i++) {
            daysElapsed += daysInMonth[i];
        }
        return daysElapsed;
    }
};

int main() {
    Date d1, d2;
    d1.setDate(10, 4, 2025);
    d2.setDate(15, 4, 2025);

    // Relational operator tests
    cout << "Comparing Dates:\n";
    if (d1 < d2) cout << "d1 is earlier\n";
    if (d1 > d2) cout << "d1 is later\n";

    // Increment test
    cout << "\nBefore increment: ";
    d1.display();
    ++d1;
    cout << "After increment: ";
    d1.display();

    // Adding days
    Date d3 = d1 + 5;
    cout << "\nDate after adding 5 days: ";
    d3.display();

    // Conversion to int
    int daysElapsed = d1;
    cout << "\nDays elapsed in year: " << daysElapsed << endl;

    return 0;
}
