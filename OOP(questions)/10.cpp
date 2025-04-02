// Write a program that takes a user’s age as input and uses nested if statements to determine and
// print whether the person is a child (age < 12), teenager (age between 12 and 18), adult (age
// between 18 and 60), or senior (age > 60).



#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 12) {
        cout << "You are a Child.\n";
    } 
    else {
        if (age >= 12 && age <= 18) {
            cout << "You are a Teenager.\n";
        } 
        else {
            if (age > 18 && age <= 60) {
                cout << "You are an Adult.\n";
            } 
            else {
                cout << "You are a Senior.\n";
            }
        }
    }

    return 0;
}
