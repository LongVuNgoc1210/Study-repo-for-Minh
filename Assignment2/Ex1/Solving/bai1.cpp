#include<iostream>

int main() {
    double *ptr = new double[365];
    if (ptr == nullptr) {
        std::cout << "Fail";
    }
    else{

    for(int i = 0; i < 365 ; i++) {
        *(ptr + i) = 0.0 ;
    }
    }
    delete[] ptr;
    return 0;
}