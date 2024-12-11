#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"
using namespace std;

// The Circle Class
class Circle : public BasicShape {
private:
    // The variables needed for the class
    double xCenter;
    double yCenter;
    double radius;

public:
    // Constructor
    // Precondition: The radius 'r' must be a positive number.
    Circle(double x, double y, double r, const string& n = "Circle");
    // Postcondition: A Circle object is created with the center at (x, y), radius 'r', and name set to a custom name.

    // Function to calculate area of the circle
    // Precondition: The radius must be a non-negative number.
    void calcArea() override;
    // Postcondition: The area of the circle is calculated and set in the base class.

    // Getter (X center)
    // Precondition: The Circle object exists.
    double getXCenter() const { return xCenter; }
    // Postcondition: Returns the X-coordinate of the circle's center.

    // Getter (Y center) 
    // Precondition: The Circle object exists.
    double getYCenter() const { return yCenter; }
    // Postcondition: Returns the Y-coordinate of the circle's center.

    // Getter (radius)
    // Precondition: The Circle object exists.
    double getRadius() const { return radius; }
    // Postcondition: Returns the radius of the circle.
};

#endif // CIRCLE_H