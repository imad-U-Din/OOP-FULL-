// 10. Function Overloading in a Class - Finding Maximum Number
// • Define a MaxFinder class with overloaded functions:
// o findMax(int, int) for two integers.
// o findMax(double, double) for two floating-point numbers.
// o findMax(int, int, int) for three integers.
// • Display the maximum of given numbers.



#include <iostream>
using namespace std;

class MaxFinder {
public:
    // Function to find max between two integers
    int findMax(int a, int b) {
        return (a > b) ? a : b;
    }

    // Function to find max between two doubles
    double findMax(double a, double b) {
        return (a > b) ? a : b;
    }

    // Function to find max between three integers
    int findMax(int a, int b, int c) {
        return (a > b && a > c) ? a : (b > c ? b : c);
    }
};

int main() {
    MaxFinder maxFinder;

    cout << "Max of 10 and 20: " << maxFinder.findMax(10, 20) << endl;
    cout << "Max of 5.5 and 2.3: " << maxFinder.findMax(5.5, 2.3) << endl;
    cout << "Max of 3, 8, and 6: " << maxFinder.findMax(3, 8, 6) << endl;

    return 0;
}
