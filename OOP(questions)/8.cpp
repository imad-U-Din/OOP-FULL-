//Exception Handling


#include <iostream>
using namespace std;

// Function to divide two numbers with exception handling
double divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero is not allowed!"; // Throwing an exception
    }
    return (double)a / b;
}

int main() {
    int x, y;
    cout << "Enter two numbers (dividend and divisor): ";
    cin >> x >> y;
    
    try {
        double result = divide(x, y);
        cout << "Result: " << result << endl;
    } catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }
    
    return 0;
}
