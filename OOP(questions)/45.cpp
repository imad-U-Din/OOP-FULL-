// Assignment 10: Banking System with Menu
// Write a program to simulate a simple banking system with the following menu options:
// 1. Deposit
// 2. Withdraw
// 3. Balance Inquiry
// 4. Exit
// • Use a switch statement to implement the menu.
// • Implement input validation and ensure no withdrawal exceeds the account balance.


#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() { balance = 0; }  // Constructor initializes balance to 0

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds!\n";
        } else if (amount > 0) {
            balance -= amount;
            cout << "Withdrawal successful. Remaining balance: $" << balance << endl;
        } else {
            cout << "Invalid withdrawal amount!\n";
        }
    }

    // Function to check balance
    void checkBalance() {
        cout << "Current balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;
    double amount;

    do {
        cout << "\nBanking System Menu:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Balance Inquiry\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.checkBalance();
                break;
            case 4:
                cout << "Exiting program. Thank you!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
