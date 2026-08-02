#include<iostream>
#include<string>
#include "BankAccount.hpp"

int main() {
    BankAccount account("123456", "Vu Quang Minh", 1000.0);
    std::cout << "Account Number : " << account.getAccountNumber() << std::endl;
    std::cout << "Owner Name : " << account.getOwnerName() << std::endl;
    std::cout << "Balance : $" << account.getBalance() << std::endl;
    account.setBalance(1500.0);
    std::cout << "Updated Balance : $" << account.getBalance() << std::endl;
    account.setOwnerName("Nguyen Van A");
    std::cout << "Updated Owner Name : " << account.getOwnerName() << std::endl;
    account.setAccountNumber("654321");
    std::cout << "Updated Account Number : " << account.getAccountNumber() << std::endl;
    account.deposit(500.0);
    std::cout << "Balance after deposit : $" << account.getBalance() << std::endl;
    account.withdraw(200.0);
    std::cout << "Balance after withdrawal : $" << account.getBalance() << std::endl;
    account.displayAccountInfo();
}