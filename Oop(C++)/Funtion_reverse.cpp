#include <iostream>
using namespace std;

void reverseString(string &str) {
    int left = 0, right = str.length() - 1;

    while (left < right) {
        swap(str[left], str[right]); 
        left++;
        right--;
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    reverseString(str); 

    cout << "Reversed string: " << str << endl;

    return 0;
}
