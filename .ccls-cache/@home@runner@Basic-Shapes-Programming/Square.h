#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"
using namespace std;

// Derived class Square (inherits from Rectangle)
class Square : public Rectangle {
private:
    // The variables needed for the class
    double side;

public:
    // Constructor
    // Precondition: The side 's' must be a positive number.
    Square(double s, const string& n = "Square");
    // Postcondition: A Square object is created with the side 's' and the name set to a custom name.

    // Getter (side)
    // Precondition: The Square object exists.
    double getSide() const { return side; }
    // Postcondition: Returns the side length of the square.
};

#endif // SQUARE_H
