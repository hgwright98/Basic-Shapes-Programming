#ifndef BASICTSHAPE_H
#define BASICTSHAPE_H

#include <string>
using namespace std;

// The start if the class BasicsShape
class BasicShape {
private:
    // This established the variables needed for the class
    double area;
    string name;

public:
    // Constructor
    // Precondition: None
    BasicShape() : area(0.0), name("") {}
    // Postcondition: The area is initialized to 0.0, and the name is initialized to an empty string.

    // Virtual Destructor
    // Precondition: None
    virtual ~BasicShape() {}
    // Postcondition: The object is properly destroyed when no longer in use, freeing any resources.

    // Getter (area)
    // Precondition: The BasicShape object exists.
    double getArea() const { return area; }
    // Postcondition: Returns the current area of the shape.

    // Getter (name)
    // Precondition: The BasicShape object exists.
    string getName() const { return name; }
    // Postcondition: Returns the current name of the shape.

    // Setter (area)
    // Precondition: The value 'a' must be a valid non-negative number.
    void setArea(double a) { 
        if (a >= 0) {
            area = a; 
        }
    }
    // Postcondition: Sets the area of the shape to the provided value 'a', if 'a' is non-negative.

    // Setter (name)
    // Precondition: The name string 'n' is valid (non-empty and non-null).
    void setName(const string& n) { name = n; }
    // Postcondition: Sets the name of the shape to the provided string 'n'.

    // Function used to calculate the area of the shape
    // Precondition: The shape must be a valid shape.
    virtual void calcArea() = 0; // Pure virtual function
    // Postcondition: The area of the shape will be calculated based on the specific type of shape.
};

#endif // BASICTSHAPE_H