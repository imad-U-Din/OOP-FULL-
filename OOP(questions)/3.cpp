// Develop a program which will read a string and rewrite it in the alphabetical order. For example, the word STRING should be
// written as GINRST.


#include <iostream>
#include <algorithm>
using namespace std;

void sortString(string &str) {
    sort(str.begin(), str.end());
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    
    sortString(input);
    
    cout << "Sorted string: " << input << endl;
    return 0;
}
