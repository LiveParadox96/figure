#include <iostream>
#include "Figure1.h"
#include "Figure2.h"

int main()
{
    double radius;
    double a, b;

    // ¬вод радиуса круга
    std::cout << "Enter circle radius: ";
    std::cin >> radius;

    if (!std::cin || radius <= 0)
    {
        std::cout << "Invalid radius!" << std::endl;
        return 1;
    }

    // ¬вод полуосей эллипса
    std::cout << "Enter ellipse a: ";
    std::cin >> a;

    if (!std::cin || a <= 0)
    {
        std::cout << "Invalid value!" << std::endl;
        return 1;
    }

    std::cout << "Enter ellipse b: ";
    std::cin >> b;

    if (!std::cin || b <= 0)
    {
        std::cout << "Invalid value!" << std::endl;
        return 1;
    }

    Circle circle;
    Ellipse ellipse;
    
    Shape* shape;
    
    shape = &circle;

    shape->setA(radius);
    shape->calculateArea();
    
    std::cout << "\nCircle:\n";
    shape->printResult();

    shape = &ellipse;

    shape->setA(a);
    shape->setB(b);
    shape->calculateArea();

    std::cout << "\nEllipse:\n";
    shape->printResult();

    return 0;
}