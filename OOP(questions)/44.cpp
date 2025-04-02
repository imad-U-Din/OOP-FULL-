// Assignment 9: Palindrome Number Checker
// Write a program to check if a number is a palindrome.
// • Use a while loop to reverse the digits of the number.
// • Extend the program to print all palindrome numbers within a given range.


#include <iostream>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int originalNum = num, reversedNum = 0, digit;
    
    while (num > 0) {
        digit = num % 10;            // Extract last digit
        reversedNum = reversedNum * 10 + digit;  // Build reversed number
        num /= 10;                   // Remove last digit
    }

    return originalNum == reversedNum;  // Compare original and reversed numbers
}

// Function to print all palindrome numbers within a range
void printPalindromes(int start, int end) {
    cout << "Palindromes between " << start << " and " << end << ":\n";
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a palindrome.\n";
    else
        cout << num << " is not a palindrome.\n";

    int start, end;
    cout << "Enter range (start end): ";
    cin >> start >> end;

    printPalindromes(start, end);

    return 0;
}
