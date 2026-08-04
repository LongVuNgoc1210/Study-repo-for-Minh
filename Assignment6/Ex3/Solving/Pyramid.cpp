#include<iostream>
#include<string>
#include "Pyramid.hpp"
#include<math.h>

Pyramid::Pyramid(double length, double width, double height) {
    if (length <= 0 || width <= 0 || height <= 0) {
        throw std::invalid_argument("Length, width, and height cannot be zero or negative.");
    }
     else {
        m_length = length;
        m_width = width;
        m_height = height;
    }
}
double Pyramid::getLength() const {
    return m_length;
}

double Pyramid::getWidth() const {
    return m_width;
}

double Pyramid::getHeight() const {
    return m_height;
}
void Pyramid::setLength(double length) {
    if (length <= 0) {
        throw std::invalid_argument("Length cannot be zero or negative.");
    }
    m_length = length;
}
void Pyramid::setWidth(double width) {
    if (width <= 0) {
        throw std::invalid_argument("Width cannot be zero or negative.");
    }
    m_width = width;
}
void Pyramid::setHeight(double height) {
    if (height <= 0) {
        throw std::invalid_argument("Height cannot be zero or negative.");
    }
    m_height = height;
}
double Pyramid::calculateVolume(double length, double width, double height) {
    if (length <= 0 || width <= 0 || height <= 0) {
        throw std::invalid_argument("Length, width, and height cannot be zero or negative.");
    }
    return (length * width * height) / 3.0;
}
double Pyramid::calculateSurfaceArea() const {
    double baseArea = m_length * m_width;
    double slantHeight = std::sqrt((m_length / 2) * (m_length / 2) + m_height * m_height);
    double lateralArea = (m_length + m_width) * slantHeight;
    return baseArea + lateralArea;
}
double Pyramid::getVolume() const {
    return calculateVolume(m_length, m_width, m_height);
}