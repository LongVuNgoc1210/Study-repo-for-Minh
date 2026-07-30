#include "Student.hpp"
#include <iostream>

Student::Student(){
    studentId = "UNKNOWN";
    name = "UNKNOWN";
    mathScore = 0;
    englishScore = 0;
    programmingScore = 0;
}

Student::Student(const std::string& id, const std::string& studentName, double math, double english, double programming){
    if(id.empty() || studentName.empty() || math < 0 || english < 0 || programming < 0) {
        throw std::invalid_argument("Invalid input for Student constructor");
    }
    studentId = id;
    name = studentName;
    mathScore = math;
    englishScore = english;
    programmingScore = programming;
}

Student::Student(const Student& other){
    studentId = other.studentId;
    name = other.name;
    mathScore = other.mathScore;
    englishScore = other.englishScore;
    programmingScore = other.programmingScore;
}

double Student::calculateAverageScore() const {
    if (mathScore < 0 || englishScore < 0 || programmingScore < 0) {
        throw std::runtime_error("Scores must be non-negative to calculate average");
    }
    return (mathScore + englishScore + programmingScore) / 3.0;
}

std::string Student::getGrade() const {
    double average = calculateAverageScore();
    if (average < 0) {
        throw std::runtime_error("Average score cannot be negative");
    }
    if (average >= 8.0) return "Excellent";
    else if (average >= 6.5) return "Good";
    else if (average >= 5.0) return "Average";
    else return "Poor";
}

void Student::displayStudentInfo() const {
    std::cout << "Student ID: " << studentId << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Math Score: " << mathScore << std::endl;
    std::cout << "English Score: " << englishScore << std::endl;
    std::cout << "Programming Score: " << programmingScore << std::endl;
    std::cout << "Average Score: " << calculateAverageScore() << std::endl;
    std::cout << "Grade: " << getGrade() << std::endl;
}

Student::~Student() {
    std::cout << "Student object is being destroyed." << std::endl;
    // Destructor logic if needed
}