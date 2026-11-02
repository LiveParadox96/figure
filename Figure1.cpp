#include "Figure1.h"
void Circle::calculateArea()
{
	const double  PI = 3.141592653589793;
	double r = getA();
	double result = PI * r * r;

	setArea(result);
};
