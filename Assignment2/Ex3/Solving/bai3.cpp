#include<iostream>

int main() {
    int anArray[9] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    int *ptr = anArray;
    for(int i = 0; i < 9; i++) {
        std::cout << *(ptr+i) << " ";
    }
    return 0;
}