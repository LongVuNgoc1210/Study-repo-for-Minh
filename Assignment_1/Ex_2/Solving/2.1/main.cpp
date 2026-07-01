#include <iostream>

#include "Bai1.hpp"

int main() {
    int num1;
    int num2;
    num1 = ReadNumber();
    num2 = ReadNumber();
    int sum = num1 + num2;
    WriteNumber(sum);
    return 0;
}