// Write a program that takes a single character as input from the user and uses a switch statement
// to check if the character is a vowel (a, e, i, o, u for both uppercase and lowercase) or a
// consonant. Print the result accordingly.


#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch (tolower(ch)) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cout << "Vowel\n";
            break;
        case 'b': case 'c': case 'd': case 'f': case 'g':
        case 'h': case 'j': case 'k': case 'l': case 'm':
        case 'n': case 'p': case 'q': case 'r': case 's':
        case 't': case 'v': case 'w': case 'x': case 'y': case 'z':
            cout << "Consonant\n";
            break;
        default:
            cout << "Not a valid letter\n";
    }

    return 0;
}
