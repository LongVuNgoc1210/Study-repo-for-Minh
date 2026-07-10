#include<iostream>

int main() {
    int anArray[9] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    int number;
    int *ptr = anArray;
    do {
        std::cout << "Hay nhap so tu 1 den 9: ";
        std::cin >> number;
    }
    while(number <1 || number >9);
    std::cout << "\nArray:";
    for(int i = 0; i < 9; i++){
        std::cout << *(ptr+i) << " ";
    }
    std::cout << "\n";

    for(int i = 0; i < 9; i++) {
        if(number == *(ptr+i)) {
            std::cout << "Vi tri so can tim la: " << i << std::endl;
            break;
        }
    }
    return 0;
}