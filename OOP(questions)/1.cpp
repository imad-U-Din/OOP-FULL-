// Design a class to represent a bank account. Include the following.
// Data Members
// ● Name of the depositor
// ● Account number
// ● Type of account
// ● Balance amount in the account
// Methods
// ● To assign initial values
// ● To deposit an amount
// ● To withdraw an amount after checking balance
// ● To display the name and balance
// Incorporate a constructor to provide initial values


#include <iostream>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize values
    BankAccount(string name, int accNum, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    // Method to deposit amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Method to withdraw amount after checking balance
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully. New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Method to display the name and balance
    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    // Creating an object of BankAccount class
    BankAccount acc("John Doe", 123456, "Savings", 5000.0);

    // Display initial account details
    acc.display();
    
    // Perform deposit and withdrawal operations
    acc.deposit(2000);
    acc.withdraw(1500);
    
    // Display final details
    acc.display();
    
    return 0;
}
