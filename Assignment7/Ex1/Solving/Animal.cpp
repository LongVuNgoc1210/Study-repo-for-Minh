#include<iostream>
#include<string>
#include "Animal.hpp"

Snake::Snake(const std::string& color,const std::string& name, int age, double length) {
    m_color = color;
    m_name = name;
    m_age = age;
    m_length = length;
}
void Snake::makeSound() {
    std::cout << "Sisss!" << std::endl;
}
void Snake::displayInfo() {
    std::cout << "Color of Snake: " << m_color << std::endl;
    std::cout << "Name of Snake: " << m_name << std::endl;
    std::cout << "Age of Snake: " << m_age << std::endl;
    std::cout << "Length of Snake: " << m_length << std::endl;
}

Cat::Cat(const std::string& color,const std::string& name, int age, double height) {
    m_color = color;
    m_name = name;
    m_age = age;
    m_heigth = height;
}

void Cat::makeSound() {
    std::cout << "Meow!" << std::endl;
}

void Cat::displayInfo() {
    std::cout << "Color of Cat: " << m_color << std::endl;
    std::cout << "Name of Cat: " << m_name << std::endl;
    std::cout << "Age of Cat: " << m_age << std::endl;
    std::cout << "Heigth of Cat: " << m_heigth << std::endl;
}