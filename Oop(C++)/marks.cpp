#include <iostream>

using namespace std;

int main() {
    int maths, physics, chemistry, english, EVS, totalMarks, percentage;

    cout << "Enter marks of student in maths: ";
    cin >> maths;
    cout << "Enter marks of student in physics: ";
    cin >> physics;
    cout << "Enter marks of student in chemistry: ";
    cin >> chemistry;
    cout << "Enter marks of student in english: ";
    cin >> english;
    cout << "Enter marks of student in EVS: ";
    cin >> EVS;

    totalMarks = maths + physics + chemistry + english + EVS;

    percentage = (totalMarks * 100) / 500;

    cout << "Total Marks: " << totalMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}