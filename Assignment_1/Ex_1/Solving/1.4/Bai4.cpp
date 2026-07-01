#include<iostream>

#include"Bai4.hpp"

double Sum(double a, double b) {
    double sum = a + b;
    return sum;
}

double Sub(double a, double b) {
    double sub = a - b;
    return sub;
}

double Mul(double a, double b) {
    double mul = a * b;
    return mul;
}

double Div(double a, double b) {
    double div = a / b;
    if (b == 0) {
        return 0;
    } else {
        return div;
    }
}