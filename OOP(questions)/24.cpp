// Program 6: Function Pointer Implementation
// Problem: Define a function int add(int a, int b). Create a function pointer that can store
// the address of this function and call it using the pointer.

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*ptr)(int, int);  // Function pointer
    ptr = add;  // Assign function address to pointer

    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Sum using function pointer: " << ptr(x, y) << endl;
    return 0;
}
