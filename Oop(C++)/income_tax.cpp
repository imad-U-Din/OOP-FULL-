#include <iostream>
using namespace std;

double calculateTax(double income) {
    double tax = 0;
    if (income <= 250000) {
        tax = 0;
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        tax = (income - 500000) * 0.2 + 12500;
    } else {
        tax = (income - 1000000) * 0.3 + 12500 + 100000;
    }
    return tax;
}

int main() {
    double income;
    cout << "Enter your annual income: ";
    cin >> income;

    if (income < 0) {
        cout << "Invalid income." << endl;
    } else {
        double tax = calculateTax(income);
        cout << "The tax amount is: ₹" << tax << endl;
    }

    return 0;
}
