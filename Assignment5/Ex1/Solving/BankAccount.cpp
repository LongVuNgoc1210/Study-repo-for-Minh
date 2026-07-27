#include"BankAccount.hpp"
#include<iostream>
void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "Desposit Successful" << std::endl;
    }
    
    else if (amount <= 0) {
        std::cout << "Invalid deposit amount." << std::endl;
    }
    else {
        std::cout << "Invalid deposit amount." << std::endl;
    }
}

void BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        std::cout << "Withdrawal Successful" << std::endl;
    }
    
    else if (amount > balance) {
        std::cout << "Insufficient balance !" << std::endl;
    }
    else if (amount <= 0) {
        std::cout << "Invalid withdrawal amount." << std::endl;
    }
}

void BankAccount::displayAccountInfo() const {
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Owner Name: " << ownerName << std::endl;
    std::cout << "Balance: $" << balance << std::endl;
}

BankAccount::BankAccount() {
    accountNumber = "UNKNOWN";
    ownerName = "UNKNOWN";
    balance = 0;
}

BankAccount::BankAccount(const std::string& accNumber, const std::string& owner, double initialBalance) {
    if (initialBalance < 0) {
        std::cout << "Initial balance cannot be negative. Setting balance to 0." << std::endl;
        initialBalance = 0;
    }
    accountNumber = accNumber;
    ownerName = owner;
    balance = initialBalance;
}