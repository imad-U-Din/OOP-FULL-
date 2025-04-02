#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"Enter side A: ";
    cin>>a;
    cout<<"Enter side b: ";
    cin>>b;
    cout<<"Enter side c: ";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b)
    {
        cout<<"These are sides of a triangle.";
    }
    else cout<<"These are not sides of a triangle.";
}