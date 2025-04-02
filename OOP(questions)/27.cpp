// Assignment 2: Nested If-Else with Range Checking
// Write a program that calculates income tax based on the following slab:
// • Income <= ₹2,50,000: No tax
// • ₹2,50,001 - ₹5,00,000: 5%
// • ₹5,00,001 - ₹10,00,000: 20%
// • Above ₹10,00,000: 30%
// The program should accept an annual income as input and output the tax amount.



#include <iostream>
using namespace std;

double calculateTax(double income) {
    if (income <= 250000)
        return 0;
    else if (income <= 500000)
        return 0.05 * (income - 250000);
    else if (income <= 1000000)
        return 0.2 * (income - 500000) + 25000;
    else
        return 0.3 * (income - 1000000) + 125000;
}

int main() {
    double income;
    cout << "Enter your annual income: ";
    cin >> income;

    if (income < 0) {
        cout << "Invalid input! Income cannot be negative." << endl;
        return 1;
    }

    double tax = calculateTax(income);
    cout << "Tax to be paid: " << tax << endl;

    return 0;
}
