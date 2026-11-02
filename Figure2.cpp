#include "Figure2.h"

void Ellipse::calculateArea()
{
    const double PI = 3.141592653589793;

    double a = getA();
    double b = getB();

    double result = PI * a * b;

    setArea(result);
}