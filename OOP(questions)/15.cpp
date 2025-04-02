// Write a program that takes a student's score (out of 100) as input and displays the grade based on
// the following criteria:
// • A: 90-100
// • B: 80-89
// • C: 70-79
// • D: 60-69
// • F: Below 60
// Use if-else statements for this.



#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks (out of 100): ";
    cin >> marks;

    if (marks >= 90) cout << "Grade: A\n";
    else if (marks >= 80) cout << "Grade: B\n";
    else if (marks >= 70) cout << "Grade: C\n";
    else if (marks >= 60) cout << "Grade: D\n";
    else cout << "Fail\n";

    return 0;
}
