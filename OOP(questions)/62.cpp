// Assignment 5: Overloading Type Conversion (Basic Type to Class Type)
// Modify the Time class so that it can accept an integer representing total minutes and convert
// it into a Time object using a constructor



#include <iostream>
using namespace std;

class Time {
    int hours, minutes;

public:
    Time(int totalMinutes) {
        hours = totalMinutes / 60;
        minutes = totalMinutes % 60;
    }

    void display() {
        cout << "Time: " << hours << " hours and " << minutes << " minutes" << endl;
    }
};

int main() {
    int totalMinutes = 130;
    Time t = totalMinutes;
    t.display();
    return 0;
}
