#include <iostream>
using namespace std;

double calculateArea(double radius, double pi = 3.14) {
    return pi * radius * radius;
}

int main() {
    double radius;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    double area1 = calculateArea(radius);
    cout << "The area of the circle (default pi) is: " << area1 << endl;
    
    double area2 = calculateArea(radius, 3.14159);
    cout << "The area of the circle (specified pi) is: " << area2 << endl;
    
    return 0;
}
