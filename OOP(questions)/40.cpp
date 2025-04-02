// Assignment 5: Character Classification
// Write a program that accepts a single character as input.
// • Use a switch statement to classify it as a vowel, consonant, digit, or special character.
// • Handle uppercase and lowercase vowels separately.


#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Vowel\n";
            break;
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            cout << "Digit\n";
            break;
        default:
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
                cout << "Consonant\n";
            else
                cout << "Special Character\n";
    }

    return 0;
}
