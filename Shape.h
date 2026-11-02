#pragma once
class Shape
{
private:
	double a;
	double b;
	double area;

protected:
	void setArea(double value);

public:
	Shape();
	Shape(double a, double b);
	
	virtual ~Shape() = default;

	void setA(double value);
	void setB(double value);

	double getA() const;
	double getB() const;

	virtual void calculateArea() = 0;

	void printResult() const;
};

