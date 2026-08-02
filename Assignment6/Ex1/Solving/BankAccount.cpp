#include "BankAccount.hpp"
#include <iostream>
#include <string>

BankAccount::BankAccount(const std::string& accountNumber, const std::string& ownerName, double balance) {
    if (balance < 0) {
      std::cout << "Initial balance cannot be negative. Setting balance to 0." << std::endl;
      m_balance = 0;
    }
    else if (accountNumber.empty()) {
        std::cout << "Account number cannot be empty. Setting account number to 'Unknown'." << std::endl;
        m_accountNumber = "Unknown";
    }
    else if (ownerName.empty()) {
        std::cout << "Owner name cannot be empty. Setting owner name to 'Unknown'." << std::endl;
        m_ownerName = "Unknown";
    }

    m_accountNumber = accountNumber;
    m_ownerName = ownerName;
    m_balance = balance;
}

std::string BankAccount::getAccountNumber() const {
    return m_accountNumber;
}

std::string BankAccount::getOwnerName() const {
    return m_ownerName;
}

double BankAccount::getBalance() const {
    return m_balance;
}

void BankAccount::setBalance(double balance) {
    if (balance < 0) {
        std::cout << "Balance cannot be negative. Setting balance to 0." << std::endl;
    }
    m_balance = balance;
}

void BankAccount::setOwnerName(const std::string& ownerName) {
    if (ownerName.empty()) {
        std::cout << "Owner name cannot be empty. Setting owner name to 'Unknown'." << std::endl;
    }
    m_ownerName = ownerName;
}

void BankAccount::setAccountNumber(const std::string& accountNumber) {
    if (accountNumber.empty()) {
        std::cout << "Account number cannot be empty. Setting account number to 'Unknown'." << std::endl;
    }
    m_accountNumber = accountNumber;
}

void BankAccount::deposit(double amount) {
    if (amount <= 0) {
        std::cout << "Deposit amount must be positive." << std::endl;
    }
    m_balance += amount;
}

void BankAccount::withdraw(double amount) {
    if (amount <= 0) {
        std::cout << "Withdrawal amount must be positive." << std::endl;
    }
    if (amount > m_balance) {
        std::cout << "Insufficient funds for withdrawal." << std::endl;
    }
    m_balance -= amount;
}

void BankAccount::displayAccountInfo() const {
    std::cout << "Account Number: " << m_accountNumber << std::endl;
    std::cout << "Owner Name: " << m_ownerName << std::endl;
    std::cout << "Balance: $" << m_balance << std::endl;
}