#include <iostream>
using namespace std;
class Student
{
public: 
    string name;
    int rno;
    float cgpa; 
};
int main()
{
    Student s1;
    s1.name = "Imad";
    s1.rno = 69;
    s1.cgpa = 8.5;

    Student s2;
    s2.name = "muneeb";
    s2.rno = 80;
    s2.cgpa = 9.3;

    cout<<s1.name<<"  "<<s1.rno<<"  "<<s1.cgpa<<endl;
    cout<<s2.name<<"  "<<s2.rno<<"  "<<s2.cgpa<<endl;
}