#include<iostream>
#include<string>
#include "Animal.hpp"

int main() {
    Snake snake("Black","Snake1",5,20.5);
    snake.displayInfo();
    snake.makeSound();
    Cat cat("Brown","Miu",5,7.3);
    cat.displayInfo();
    cat.makeSound();
}