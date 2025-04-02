#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    cout << "Enter first integers: ";
    cin >> num1;
    cout << "Enter second integers: ";
    cin>>num2;

    int result = sum(num1, num2);
    cout << "The sum is: " << result << endl;
    
    return 0;
}
