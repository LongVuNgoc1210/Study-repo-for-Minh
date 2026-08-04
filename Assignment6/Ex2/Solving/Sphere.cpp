#include<iostream>
#include<string>
#include "Sphere.hpp"

const double PI = 3.14159265358979323846;

Sphere::Sphere(double radius) {
    if (radius < 0) {
        std::cout << "Radius cannot be negative. Setting radius to 0." << std::endl;
        m_radius = 0;
    } else {
        m_radius = radius;
    }
}

double Sphere::getRadius() const {
    return m_radius;
}

double Sphere::calculateVolume(double radius) {
    return (4.0 / 3.0) * PI * radius * radius * radius;
}

double Sphere::getVolume() const {
    return calculateVolume(m_radius);
}