#include <string>

class Student {
    private:
        std::string studentId;
        std::string name;
        double mathScore;
        double englishScore;
        double programmingScore;
    public:
        Student();
        Student(const std::string& id, const std::string& studentName, double math, double english, double programming);
        Student(const Student& other);
        double calculateAverageScore() const;
        std::string getGrade() const;
        void displayStudentInfo() const;
        
        ~Student();
};