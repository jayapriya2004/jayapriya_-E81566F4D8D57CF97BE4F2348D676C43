#include <iostream>
#include <string>

class BankAccount {
private:
    std::string account_number;
    std::string account_holder_name;
    double account_balance;

public:
    // Constructor to initialize the account
    BankAccount(const std::string& accNumber, const std::string& accHolderName, double initialBalance = 0.0) {
        account_number = accNumber;
        account_holder_name = accHolderName;
        account_balance = initialBalance;
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            account_balance += amount;
            std::cout << "Deposited $" << amount << ". New balance: $" << account_balance << std::endl;
        } else {
            std::cout << "Deposit amount must be greater than 0." << std::endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= account_balance) {
            account_balance -= amount;
            std::cout << "Withdrew $" << amount << ". New balance: $" << account_balance << std::endl;
        } else if (amount > account_balance) {
            std::cout << "Insufficient funds for withdrawal." << std::endl;
        } else {
            std::cout << "Withdrawal amount must be greater than 0." << std::endl;
        }
    }

    // Method to display the account balance
    void displayBalance() {
        std::cout << "Account balance for " << account_holder_name << ": $" << account_balance << std::endl;
    }
};

int main() {
    // Create an instance of the BankAccount class
    BankAccount myAccount("12345", "John Doe", 1000.0);

    // Test deposit and withdrawal functionality
    myAccount.displayBalance();
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.displayBalance();
    myAccount.withdraw(1500.0);  // Testing insufficient funds case

    return 0;
}
