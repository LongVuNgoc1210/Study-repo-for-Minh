#include <iostream>

#include "Bai4.hpp"

int main() {
    double num1, num2;
    double result;
    char dau;

    std::cin >> num1;
    std::cin >> num2;
    std::cin >> dau;

   

    if(dau == '+') {
        result = Sum(num1, num2);
    }
    else if(dau == '-') {
        result = Sub(num1, num2);
    }
    else if(dau == '*') {
        result = Mul(num1, num2);
    }
    else if(dau == '/') {
        if(num2 != 0) {
        result = Div(num1, num2);
    }   else{
        std::cout << "Error" << std::endl;
        return 0;
    }
    }
    std::cout << result << std::endl;
    return 0;
}