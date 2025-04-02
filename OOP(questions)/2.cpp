// Assume that a bank maintains two kinds of account for its customers, one called saving account and the other current account. The
// saving account provides compound interest and withdrawal facilities but no cheque book facility. The current account provides
// cheque book facility but no interest. Current account holders should also maintain a minimum balance and if it falls below a
// specified level, a service charge is imposed. Create a class Account that stores customer name, account number, and type of account.
// From this derive the classes Curr-acct and Sav-acct to make them more specific to their requirements. Include the necessary
// methods in order to achieve the following tasks.
// ● Accept deposit from a customer and update the balance
// ● Display the balance
// ● Compute and deposit interest
// ● Permit withdrawal and update the balance
// ● Check for the minimum balance, impose penalty, if necessary and update the balance.
// Do not use any constructors. Use methods to initialize the class members.


#include <iostream>
#include <cmath>
using namespace std;

class Account {
protected:
    string customerName;
    int accountNumber;
    string accountType;
    double balance;

public:
    void initialize(string name, int accNum, string accType, double initialBalance) {
        customerName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void displayBalance() {
        cout << "Account Holder: " << customerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavAcct : public Account {
private:
    double interestRate = 0.05; // 5% interest rate

public:
    void computeInterest(int years) {
        double interest = balance * pow((1 + interestRate), years) - balance;
        balance += interest;
        cout << "Interest of " << interest << " added. New balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully. New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }
};

class CurrAcct : public Account {
private:
    double minBalance = 1000.0;
    double serviceCharge = 100.0;

public:
    void withdraw(double amount) {
        if (amount > 0 && balance - amount >= 0) {
            balance -= amount;
            cout << "Amount withdrawn successfully. New balance: " << balance << endl;
            checkMinBalance();
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    void checkMinBalance() {
        if (balance < minBalance) {
            balance -= serviceCharge;
            cout << "Balance fell below minimum. Service charge of " << serviceCharge << " imposed. New balance: " << balance << endl;
        }
    }
};

int main() {
    SavAcct savings;
    savings.initialize("Alice", 1001, "Savings", 5000.0);
    savings.displayBalance();
    savings.computeInterest(2);
    savings.withdraw(2000);
    savings.displayBalance();

    CurrAcct current;
    current.initialize("Bob", 1002, "Current", 1500.0);
    current.displayBalance();
    current.withdraw(600);
    current.displayBalance();

    return 0;
}
