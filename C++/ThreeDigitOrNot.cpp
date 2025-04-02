#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"Three digit number";
    }
    else{
        cout<<"Not a three digit number";
    }
}