// Create a menu-based program where the user can choose between "Vegetarian" and "NonVegetarian" options, then display a sub-menu with specific dishes based on the selection. Use
// nested switch statements to handle each menu and sub-menu option.


#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Choose: 1. Vegetarian 2. Non-Vegetarian\n";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Choose: 1. Salad 2. Veg Burger\n";
            cin >> choice;
            switch (choice) {
                case 1: cout << "You chose Salad\n"; break;
                case 2: cout << "You chose Veg Burger\n"; break;
                default: cout << "Invalid choice\n";
            }
            break;
        case 2:
            cout << "Choose: 1. Chicken Burger 2. Fish Fry\n";
            cin >> choice;
            switch (choice) {
                case 1: cout << "You chose Chicken Burger\n"; break;
                case 2: cout << "You chose Fish Fry\n"; break;
                default: cout << "Invalid choice\n";
            }
            break;
        default:
            cout << "Invalid choice\n";
    }

    return 0;
}
