// Assignment 8: Multi-Level Discount System
// Develop a program that calculates the total price after applying a discount based on purchase
// value:
// • Purchases below Rs 100: no discount
// • Rs100-Rs 500: 10% discount
// • Rs 500-Rs 1000: 15% discount
// • Above Rs 1000: 20% discount
// • Use nested conditional operators for the discount logic.



#include <iostream>
using namespace std;

int main() {
    double price;
    cout << "Enter purchase amount: ";
    cin >> price;

    double discount = (price > 1000) ? 0.2 :
                      (price > 500) ? 0.15 :
                      (price > 100) ? 0.1 : 0;
    
    double finalPrice = price - (price * discount);
    cout << "Final Price after Discount: " << finalPrice << endl;

    return 0;
}
