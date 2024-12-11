#include "Rectangle.h"
using namespace std;

// This is the Rectangle Constructor
Rectangle::Rectangle(double l, double w, const string& n) : length(l), width(w) {
    setName(n);
    calcArea();
}

// This is the Rectangle calcArea
void Rectangle::calcArea() {
    double area = length * width; // Area of rectangle = length * width
    setArea(area);
}