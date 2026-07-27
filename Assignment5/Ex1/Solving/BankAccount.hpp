#include <iostream>
#include <string>
class BankAccount {

    private:
        std::string accountNumber;
        std::string ownerName;
        double balance;
    public:
        void deposit(double amount);
        void withdraw(double amount);
        void displayAccountInfo() const;
        BankAccount();
        BankAccount(const std::string& accNumber, const std::string& owner, double initialBalance);
};