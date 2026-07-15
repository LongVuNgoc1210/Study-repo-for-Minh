#include<iostream>

int main() {
    int posCount = 0;
    int evenCount = 0;
    int oddCount = 0;
    int sum = 0;
    int x;

    while(1) {
        std::cout << "Nhap so: " ;
        std::cin >> x;

        if(x == 0) {
            std::cout << "stop normally" << std::endl;
            break;
        }
        else if(x == 999) {
            std::cout << "terminate immediately " << std::endl;
            break;
        }else if(x < 0) {
            continue;
        }
        posCount ++;
        sum += x;
        if(x % 2 == 0) {
            evenCount ++;
        } else {
            oddCount ++;
        }
    }
    std::cout << "So cac so duong: " << posCount << std::endl;
    std::cout << "So cac so chan: " << evenCount << std::endl;
    std::cout << "So cac so le: " << oddCount << std::endl;
    std::cout << "Tong la: " << sum << std::endl;
    return 0;
}