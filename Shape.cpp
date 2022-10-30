#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

std::unique_ptr<Shape> Shape::createShape(char type)
{
    switch (type) {
    case 'C': {
        double radius {0};

        std::cout << "Input radius: ";
        std::cin >> radius;
        return std::make_unique<Circle>(radius);
    }
    case 'T': {
        double a {0}, b {0}, angle {0};

        std::cout << "Input sides a, b and angle: ";
        std::cin >> a >> b >> angle;
        return std::make_unique<Triangle>(a, b, angle);
    }
    case 'R': {
        double a, b;

        std::cout << "Input sides a and b: ";
        std::cin >> a >> b;

        return std::make_unique<Rectangle>(a, b);
    }
    default:
        std::cout << "Wrong input.\nTry: C, T or R.";
        break;
    }

    return {};
}
