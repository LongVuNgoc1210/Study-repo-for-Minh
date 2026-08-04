#include<iostream>
#include<string>
#include "Pyramid.hpp"

int main() {
    Pyramid p(3.0, 4.0, 5.0);
    std::cout << "Length: " << p.getLength() << std::endl;
    std::cout << "Width: " << p.getWidth() << std::endl;
    std::cout << "Height: " << p.getHeight() << std::endl;
    std::cout << "Volume: " << p.getVolume() << std::endl;
    std::cout << "Surface Area: " << p.calculateSurfaceArea() << std::endl;
    std::cout << "Static Volume Calculation: " << Pyramid::calculateVolume(3.0, 4.0, 5.0) << std::endl;
    p.setLength(6.0);
    p.setWidth(7.0);
    p.setHeight(8.0);
    std::cout << "Updated Length: " << p.getLength() << std::endl;
    std::cout << "Updated Width: " << p.getWidth() << std::endl;
    std::cout << "Updated Height: " << p.getHeight() << std::endl;
    std::cout << "Updated Volume: " << p.getVolume() << std::endl;
    std::cout << "Updated Surface Area: " << p.calculateSurfaceArea() << std::endl;
    std::cout << "Updated Static Volume Calculation: " << Pyramid::calculateVolume(6.0, 7.0, 8.0) << std::endl;
    return 0;
}