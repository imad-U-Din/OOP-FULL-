// Assignment 2: Student Grading System
// Write a program that accepts a student’s marks in 5 subjects.
// • Use nested if-else to assign grades (A, B, C, D, F) based on the percentage.
// • If the student fails in more than one subject, print "Repeat Year" regardless of percentage.


#include <iostream>
using namespace std;

char getGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 80) return 'B';
    else if (percentage >= 70) return 'C';
    else if (percentage >= 60) return 'D';
    else return 'F';
}

int main() {
    int marks[5], failedSubjects = 0;
    float total = 0;
    
    cout << "Enter marks in 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
        if (marks[i] < 40) failedSubjects++;
    }

    float percentage = total / 5;
    
    if (failedSubjects > 1)
        cout << "Repeat Year\n";
    else
        cout << "Grade: " << getGrade(percentage) << endl;

    return 0;
}
