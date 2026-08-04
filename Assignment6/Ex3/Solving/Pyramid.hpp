#include<iostream>
#include<string>

class Pyramid {
    private:
        double m_length;
        double m_width;
        double m_height;
    public:
        Pyramid(double length, double width, double height);
        double getLength() const;
        double getWidth() const;
        double getHeight() const;
        void setLength(double length);
        void setWidth(double width);
        void setHeight(double height);
        static double calculateVolume(double length, double width, double height);
        double calculateSurfaceArea() const;
        double getVolume() const;

};