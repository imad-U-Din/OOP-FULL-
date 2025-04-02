#include <iostream>

using namespace std;

int main()
{
    int marks[5];
    int total_marks = 0;
    int failed_subjects = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks in subject " << i + 1 << ":";
        cin >> marks[i];
        total_marks += marks[i];
        if (marks[i] < 35)
        {
            failed_subjects++;
        }
    }

    double percentage = (double)total_marks / 5;

    if (failed_subjects > 1)
    {
        cout << "Repeat Year" << endl;
    }
    else
    {
        if (percentage >= 90)
        {
            cout << "Grade: A" << endl;
        }
        else if (percentage >= 80)
        {
            cout << "Grade: B" << endl;
        }
        else if (percentage >= 70)
        {
            cout << "Grade: C" << endl;
        }
        else if (percentage >= 60)
        {
            cout << "Grade: D" << endl;
        }
        else
        {
            cout << "Grade: F" << endl;
        }
    }

    return 0;
}