#include<iostream>
#include "Student.hpp"

int main() {
    Student student1("SV001", "Nguyen Van A", 8.5, 7.5, 9.0);
    student1.displayStudentInfo();
    Student student2(student1); // Using copy constructor
    student2.displayStudentInfo();
    Student student3; // Using default constructor
    student3.displayStudentInfo();
    student2.~Student();
    
}