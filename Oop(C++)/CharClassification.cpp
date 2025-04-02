#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << ch << " is a vowel." << endl;
        break;
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        cout << ch << " is a digit." << endl;
        break;
    default:
        cout << ch << " is a consonant or special character." << endl;
    }

    return 0;
}