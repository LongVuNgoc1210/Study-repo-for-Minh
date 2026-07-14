#include<iostream>

int main() {
    double Sub1, Sub2, Sub3;
    std::cin >> Sub1 >> Sub2 >> Sub3;
    double Sum = Sub1 + Sub2 + Sub3;
    double avg = Sum / 3;
    std::cout << "Tong diem 3 mon: " << Sum << std::endl;
    std::cout << "Diem trung binh: " << avg << std::endl;
    if(avg >= 90) {
        std::cout << "Grade: A : Pass " << std::endl; 
    }
    else if(avg >= 80 && avg < 90) {
        std::cout << "Grade: B : Pass" << std::endl;
    }
    else if(avg < 80 && avg >=70) {
        std::cout << "Grade: C : Pass" << std::endl;
    }
    else if(avg <70 && avg >=60) {
        std::cout << "Grade: D : Pass" << std::endl;
    }else{
        std::cout << "Grade: F : Fail" << std::endl; 
    }
    return 0;
}
