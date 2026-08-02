#ifndef BANK_ACCOUNT_HPP
#define BANK_ACCOUNT_HPP

#include <iostream>
#include <string>

class BankAccount { 
    private:
        std::string m_accountNumber;
        std::string m_ownerName;
        double m_balance;
    
    public:
        BankAccount(const std::string& accountNumber, const std::string& ownerName, double balance);
        std::string getAccountNumber() const;
        std::string getOwnerName() const;
        double getBalance() const;
        void setBalance(double balance);
        void setOwnerName(const std::string& ownerName);   
        void setAccountNumber(const std::string& accountNumber);
        void deposit(double amount);
        void withdraw(double amount);
        void displayAccountInfo() const;
};
#endif 