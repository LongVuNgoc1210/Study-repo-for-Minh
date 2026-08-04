#include<iostream>
#include<string>
#include "Sphere.hpp"

int main() {
    Sphere s(5.0);
    std::cout << "Radius: " << s.getRadius() << std::endl;
    std::cout << "Volume: " << s.getVolume() << std::endl;
    std::cout << "Volume (using static method): " << Sphere::calculateVolume(5.0) << std::endl;
    std::cout << "Volume (using static method with radius 3.0): " << Sphere::calculateVolume(3.0) << std::endl;
}