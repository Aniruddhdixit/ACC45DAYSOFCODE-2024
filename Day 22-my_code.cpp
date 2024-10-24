#include <iostream>

class BankAccount {
private:
    double accountNumber;
    double balance;

public:
    // Default constructor with starting balance of 5000
    BankAccount() : accountNumber(0), balance(5000) {}

    // Overloaded constructor to initialize account number and balance
    BankAccount(double accNum, double initBalance) : accountNumber(accNum), balance(initBalance) {}

    // Overloaded binary operator + to deposit money
    BankAccount operator+(double amount) {
        balance += amount;
        return *this;
    }

    // Overloaded binary operator - to withdraw money
    BankAccount operator-(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            std::cout << "Insufficient balance to withdraw!" << std::endl;
        }
        return *this;
    }

    // Function to display account details
    void display() const {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Current Balance: " << balance << std::endl;
    }
};

int main() {
    // Create a BankAccount object with default constructor
    BankAccount account1;
    account1.display();

    // Deposit money
    account1 = account1 + 1000;
    std::cout << "After depositing 1000: " << std::endl;
    account1.display();

    // Withdraw money
    account1 = account1 - 2000;
    std::cout << "After withdrawing 2000: " << std::endl;
    account1.display();

    // Trying to withdraw more than balance
    account1 = account1 - 10000;

    return 0;
}
