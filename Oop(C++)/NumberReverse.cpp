#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10); 
        num /= 10;                            
    }
    return reversed;
}

int main() {
    int num;

    do {
        cout << "Enter a positive integer (0 to stop): ";
        cin >> num;

        if (num < 0) {
            cout << "Please enter a positive integer!" << endl;
        } else if (num > 0) {
            cout << "Reversed: " << reverseNumber(num) << endl;
        }
    } while (num != 0);

    cout << "Program terminated." << endl;
    return 0;
}
