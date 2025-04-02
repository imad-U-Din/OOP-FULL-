#include <iostream>
using namespace std;
 
// Function to increment by value
void incrementByValue(int x) {
    x++; // Modifies the copy, not the original
}

// Function to increment by reference
void incrementByReference(int &x) {
    x++; // Modifies the original variable
}

// Function to increment using pointers
void incrementByPointer(int *x) {
    (*x)++; // Modifies the original variable through the pointer
}

// Function demonstrating reference usage
void swapByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// Function demonstrating pointer usage
void swapByPointer(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function to generate Fibonacci series using recursion
void fibonacci(int n, int a = 0, int b = 1) {
    if (n > 0) {
        cout << a << " ";
        fibonacci(n - 1, b, a + b);
    }
}

int main() {
    int a = 5, b = 5, c = 5;
    
    // Call by value
    incrementByValue(a);
    cout << "After incrementByValue, a: " << a << endl; // Output: 5 (unchanged)
    
    // Call by reference
    incrementByReference(b);
    cout << "After incrementByReference, b: " << b << endl; // Output: 6 (changed)
    
    // Call by pointer
    incrementByPointer(&c);
    cout << "After incrementByPointer, c: " << c << endl; // Output: 6 (changed)
    
    // Demonstrating swap using reference
    int x = 10, y = 20;
    swapByReference(x, y);
    cout << "After swapByReference, x: " << x << " y: " << y << endl; // x = 20, y = 10
    
    // Demonstrating swap using pointers
    int m = 30, n = 40;
    swapByPointer(&m, &n);
    cout << "After swapByPointer, m: " << m << " n: " << n << endl; // m = 40, n = 30
    
    // Fibonacci series
    int terms = 10;
    cout << "Fibonacci series: ";
    fibonacci(terms);
    cout << endl;
    
    return 0;
}
