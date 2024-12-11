#include "Circle.h"
#include <cmath>
using namespace std;

// This is the circle Constructor
Circle::Circle(double x, double y, double r, const string& n) : xCenter(x), yCenter(y), radius(r) {
    setName(n);
    calcArea();
}

// This is the circle calcArea
void Circle::calcArea() {
    double area = M_PI * radius * radius; // Area of circle = πr^2
    setArea(area);
}
