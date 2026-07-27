#include<iostream>
#include"BankAccount.hpp"

int main() {
    BankAccount account1;
    BankAccount account2("123456", "Nguyen Van A", 5000000);

    account1.displayAccountInfo();
    account2.displayAccountInfo();

    account2.deposit(1000000);
    account2.withdraw(2000000);
    account2.withdraw(10000000); 
    account2.displayAccountInfo();
}