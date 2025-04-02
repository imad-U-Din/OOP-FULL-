// Program 2: Function with Default Arguments
// Problem: Write a function calculateArea(double radius, double pi = 3.14) that
// calculates the area of a circle using the formula π * r².
// • If the user does not provide the value of pi, use 3.14 as the default.
// • Call this function with and without specifying the value of pi.



#include <iostream>
using namespace std;

double calculateArea(double radius, double pi = 3.14) {
    return pi * radius * radius;
}

int main() {
    double r;
    cout << "Enter radius: ";
    cin >> r;

    cout << "Area (default pi): " << calculateArea(r) << endl;
    cout << "Area (custom pi = 3.14159): " << calculateArea(r, 3.14159) << endl;

    return 0;
}
