#include <iostream>
#include <new>
#include <string>
#include <utility>

struct Student {
    long id;
    std::string name;
    double Math;
    double Physics;
    double Chemistry;
};

void inputStudent(Student &s) {
    std::cout << "Enter student ID: ";
    std::cin >> s.id;
    std::cin.ignore(); // Xoa ki tu Enter trong bo dem de nhap ten sinh vien
    std::cout << "Enter student name: ";
    std::getline(std::cin, s.name);
    std::cout << "Enter Math score: ";
    std::cin >> s.Math;
    std::cout << "Enter Physics score: ";
    std::cin >> s.Physics;
    std::cout << "Enter Chemistry score: ";
    std::cin >> s.Chemistry;
}
 void inputList(Student *students, int n) {
    if (students == nullptr || n <= 0) {
        std::cout << "No students to input." << std::endl;
        return;
    }

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter information for student " << (i + 1) << ":\n";
        inputStudent(students[i]);
    }
}

double calculateAverage(const Student &s) {
    return (s.Math + s.Physics + s.Chemistry) / 3.0;
}

std::string getGrade(double average) {
    if (average >= 8.5) return "A";
    else if (average >= 7.0) return "B";
    else if (average >= 5.5) return "C";
    else if (average >= 4.0) return "D";
    else return "F";
}

void printStudent(const Student &s) {
    double average = calculateAverage(s);
    std::string grade = getGrade(average);
    std::cout << "ID: " << s.id << ", Name: " << s.name
              << ", Math: " << s.Math << ", Physics: " << s.Physics
              << ", Chemistry: " << s.Chemistry
              << ", Average: " << average
              << ", Grade: " << grade << std::endl;
}

void printList(const Student *students, int n) {
    if(students == nullptr || n <= 0) {
        std::cout << "No students to display." << std::endl;
        return;
    }
    for (int i = 0; i < n; ++i) {
        std::cout << "Student " << (i + 1) << ":\n";
        printStudent(students[i]);
    }
}

void findBestStudent(const Student *students, int n) {
    if (students == nullptr || n <= 0) {
        std::cout << "No students in the list." << std::endl;
        return;
    }
    const Student *bestStudent = &students[0];
    double highestAverage = calculateAverage(students[0]);
    for (int i = 1; i < n; ++i) {
        double currentAverage = calculateAverage(students[i]);
        if (currentAverage > highestAverage) {
            highestAverage = currentAverage;
            bestStudent = &students[i];
        }
    }
    std::cout << "Best student:\n";
    printStudent(*bestStudent);
}

void countPassed(const Student *students, int n) {
    if (students == nullptr || n <= 0) {
        std::cout << "No students to evaluate." << std::endl;
        return;
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (calculateAverage(students[i]) >= 4.0) {
            count++;
        }
    }
    std::cout << "Number of students who passed: " << count << std::endl;
}

void sortByAverage(Student *students, int n) {
    if (students == nullptr || n <= 0) {
        std::cout << "No students to sort." << std::endl;
        return;
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
           if (calculateAverage(students[j]) < calculateAverage(students[j + 1])) {
                std::swap(students[j], students[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the number of students: ";
    std::cin >> n;

    Student *students = new (std::nothrow) Student[n];
    if (students == nullptr) {
        std::cout << "Memory allocation failed." << std::endl;
        return 1;
    }

    int choice;
    do{
        
        std::cout << "Menu:\n";
        std::cout << "1. Input student list\n";
        std::cout << "2. Print student list\n";
        std::cout << "3. Find best student\n";
        std::cout << "4. Count passed students\n";
        std::cout << "5. Sort students by average score\n";
        std::cout << "6. Exit\n";
        std::cout << "Choose an option: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                inputList(students, n);
                break;
            case 2:
                printList(students, n);
                break;
            case 3:
                findBestStudent(students, n);
                break;
            case 4:
                countPassed(students, n);
                break;
            case 5:
                  sortByAverage(students, n);
                 std::cout << "Students sorted by average score.\n";
                  printList(students, n);
                break;
            case 6:
                std::cout << "Exiting the program.\n";
                delete[] students;
                return 0;
            default:
                std::cout << "Invalid option. Please try again.\n";
        }

    }
    while(choice != 6);
}