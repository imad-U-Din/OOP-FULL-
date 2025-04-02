#include<iostream>
using namespace std;

int main (){
    int n=12345;
    int count =0,r;
    while(n!=0){
        r=n%10;
        n/=10;
        count ++;
    }
    cout<<"total number of digits are: "<<count<<endl;
    return 0;
}