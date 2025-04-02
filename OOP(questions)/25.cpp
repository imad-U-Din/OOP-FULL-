// Program7: Function to Reverse a String
// Problem: Implement a function reverseString(string &str) that reverses a string in-place
// using pass by reference.
// Example:
// Input: "hello"
// Output: "olleh"


#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    reverseString(str);
    cout << "Reversed string: " << str << endl;

    return 0;
}
