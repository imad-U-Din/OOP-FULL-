#include <iostream>
using namespace std;

int main() {
    int mainChoice, dishChoice;

    cout << "Select an option:\n";
    cout << "1. Vegetarian\n";
    cout << "2. Non-Vegetarian\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> mainChoice;

    switch (mainChoice) {
        case 1:  
            cout << "\nVegetarian Menu:\n";
            cout << "1. Vegetable Stir Fry\n";
            cout << "2. Paneer Curry\n";
            cout << "3. Veggie Burger\n";
            cout << "Enter your choice (1-3): ";
            cin >> dishChoice;

            switch (dishChoice) {
                case 1:
                    cout << "You selected Vegetable Stir Fry.\n";
                    break;
                case 2:
                    cout << "You selected Paneer Curry.\n";
                    break;
                case 3:
                    cout << "You selected Veggie Burger.\n";
                    break;
                default:
                    cout << "Invalid choice in Vegetarian menu.\n";
            }
            break;

        case 2:  
            cout << "\nNon-Vegetarian Menu:\n";
            cout << "1. Grilled Chicken\n";
            cout << "2. Beef Steak\n";
            cout << "3. Fish Tacos\n";
            cout << "Enter your choice (1-3): ";
            cin >> dishChoice;

            switch (dishChoice) {
                case 1:
                    cout << "You selected Grilled Chicken.\n";
                    break;
                case 2:
                    cout << "You selected Beef Steak.\n";
                    break;
                case 3:
                    cout << "You selected Fish Tacos.\n";
                    break;
                default:
                    cout << "Invalid choice in Non-Vegetarian menu.\n";
            }
            break;

        default:
            cout << "Invalid choice in main menu.\n";
    }

    return 0;
}
