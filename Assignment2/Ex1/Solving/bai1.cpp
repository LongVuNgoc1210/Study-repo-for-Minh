#include<iostream>

int main() {
    double Tempurature[365];
    double *ptr = Tempurature;
    for(int i = 0; i < 365 ; i++) {
        *(ptr + i) = 0.0 ;
    }
    return 0;
}