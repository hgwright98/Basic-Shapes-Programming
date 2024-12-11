#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"
using namespace std;

// Derived class Rectangle
class Rectangle : public BasicShape {
private:
    // The variables needed for the class
    double length;
    double width;

public:
    // Constructor
    // Precondition: The length 'l' and width 'w' must be positive numbers.
    Rectangle(double l, double w, const string& n = "Rectangle");
    // Postcondition: A Rectangle object is created with the length 'l', width 'w', and name set to a custom name.

    // Function to calculate area of the rectangle
    // Precondition: The length 'l' and width 'w' must be positive values.
    void calcArea() override;
    // Postcondition: The area of the rectangle is calculated and set in the base class.

    // Getter (length)
    // Precondition: The Rectangle object exists.
    double getLength() const { return length; }
    // Postcondition: Returns the length of the rectangle.

    // Getter (width)
    // Precondition: The Rectangle object exists.
    double getWidth() const { return width; }
    // Postcondition: Returns the width of the rectangle.
};

#endif // RECTANGLE_H
