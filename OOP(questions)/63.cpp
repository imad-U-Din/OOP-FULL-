// Assignment 6: Overloading + and - for Custom Currency Class
// Write a class Currency with integer attributes rupees and paise. Overload + and - operators to
// perform addition and subtraction of two Currency objects.


#include <iostream>
using namespace std;

class Currency {
    int rupees, paise;

public:
    Currency(int r = 0, int p = 0) : rupees(r), paise(p) {}

    Currency operator+(const Currency& c) {
        int totalPaise = (rupees + c.rupees) * 100 + (paise + c.paise);
        return Currency(totalPaise / 100, totalPaise % 100);
    }

    Currency operator-(const Currency& c) {
        int totalPaise = (rupees * 100 + paise) - (c.rupees * 100 + c.paise);
        return Currency(totalPaise / 100, totalPaise % 100);
    }

    void display() {
        cout << rupees << " Rupees and " << paise << " Paise" << endl;
    }
};

int main() {
    Currency c1(5, 50), c2(2, 75), c3;
    
    c3 = c1 + c2;
    cout << "After Addition: ";
    c3.display();

    c3 = c1 - c2;
    cout << "After Subtraction: ";
    c3.display();

    return 0;
}
