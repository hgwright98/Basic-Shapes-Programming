#include "Square.h"
using namespace std;

// The square Constructor (inherits Rectangle)
Square::Square(double s, const string& n) : Rectangle(s, s, n), side(s) {
    setName(n);
}
