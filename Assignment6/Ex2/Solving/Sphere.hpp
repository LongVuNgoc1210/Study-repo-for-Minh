#include<iostream>
#include<string>

class Sphere {
    private:
        double m_radius;
    public:
        Sphere(double radius);
        double getRadius() const;
        static double calculateVolume(double radius);
        double getVolume() const;
};
