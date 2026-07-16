#include<iostream>

double taxRate = 0.10;
namespace Payroll {
    double calculateTax(double salary) {
        return salary * ::taxRate;
    }
    double calculateNetSalary(double salary) {
        return salary - calculateTax(salary);
    }
}

int main() {
    using namespace Payroll;
    int choice;
    double salary;
    do {
        std::cout << "BANG TINH LUONG" << std::endl;
        std::cout << "Nhan phim '1' de tinh thue" << std::endl;
        std::cout << "Nhan phim '2' de tinh luong rong" << std::endl;
        std::cout << "Nhan phim '3' de thay doi ti le thue" << std::endl;
        std::cout << "Nhan phim '0' de thoat" << std::endl;
        std::cout << "Hay nhap lua chon: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "Tinh tien thue " << std::endl;
            std::cin >> salary;
            std::cout << "Tien thue la: " << calculateTax(salary) << std::endl;
            break;
        case 2:
            std::cout << "Tinh luong rong" << std::endl;
            std::cin >> salary;
            std::cout << "Tien luong rong la: " << calculateNetSalary(salary) << std::endl;
            break;
        case 3:
            std::cout << "Thay doi ti le thue" << std::endl;
            std::cin >> ::taxRate;
            std::cout << "Ti le thue moi la: " << taxRate << std::endl;
            break;
        case 0:
            std::cout <<"THOAT CHUONG TRINH" << std::endl;
            break;
        default:
            std::cout <<"HAY LUA CHON CHE DO PHU HOP" << std::endl;
            break;
        }
    } while(choice != 0);
    return 0;
}