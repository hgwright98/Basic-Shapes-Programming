#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main() {
    // This creates an array of BasicShape pointers
    BasicShape* shapes[5];

    // This creates the shapes and add them to the array
    shapes[0] = new Rectangle(4.0, 5.0, "Rectangle 1");
    shapes[1] = new Rectangle(2.0, 3.0, "Rectangle 2");
    shapes[2] = new Circle(0.0, 0.0, 3.0, "Circle 1");
    shapes[3] = new Circle(5.0, 5.0, 2.0, "Circle 2");
    shapes[4] = new Square(4.0, "Square 1");

    // This loops through the array and displays the name and area of each shape
    for (int i = 0; i < 5; ++i) {
        cout << "Shape Name: " << shapes[i]->getName() << endl << "Area: " << shapes[i]->getArea() << "" << endl << endl;
    }

    // This cleans up the memory
    for (int i = 0; i < 5; ++i) {
        delete shapes[i];
    }

    return 0;
}
