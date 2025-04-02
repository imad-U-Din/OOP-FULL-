// Assignment 4: Overloading Type Conversion (Class to Basic Type)
// Create a class Time with attributes hours and minutes. Overload type conversion so that a Time
// object can be converted into an integer representing total minutes.


#include <iostream>
using namespace std;

class Time {
    int hours, minutes;

public:
    Time(int h, int m) : hours(h), minutes(m) {}

    operator int() {
        return (hours * 60) + minutes;
    }
};

int main() {
    Time t(2, 30);
    int totalMinutes = t;
    cout << "Total Minutes: " << totalMinutes << endl;
    return 0;
}
