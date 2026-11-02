#include "Shape.h"
#include <iostream>

Shape::Shape(): a(0), b(0), area(0)
{
};

Shape::Shape(double a, double b):a(a), b(b), area(0)
{
};

void Shape::setA(double value)
{
	a = value;
};

void Shape::setB(double value)
{
	b = value;
};

double Shape::getA() const
{
	return a;
};

double Shape::getB() const
{
	return b;
};

void Shape::setArea(double value) {

	area = value;
};

void Shape::printResult() const
{
std::cout << "Area: " << area << std::endl;
};
