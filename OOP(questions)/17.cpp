// Write a program that takes an integer as input and uses a for loop with an if statement to check
// if the number is prime. If it’s prime, print "Prime Number"; otherwise, print "Not a Prime
// Number."



#include <iostream>
using namespace std;

int main() {
    int num, i;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 2)
        isPrime = false;
    else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << num << " is a Prime Number\n";
    else
        cout << num << " is not a Prime Number\n";

    return 0;
}
