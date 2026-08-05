#include<iostream>
#include<string>

class Animal {
public:
    std::string m_color;
    std::string m_name;
    int m_age;
};

class Snake: public Animal {
    public:
    double m_length;
    Snake(const std::string& color,const std::string& name, int age, double length);
    void makeSound();
    void displayInfo();
};

class Cat: public Animal {
    public:
    double m_heigth;
    Cat(const std::string& color,const std::string& name, int age, double height);
    void makeSound();
    void displayInfo();
};