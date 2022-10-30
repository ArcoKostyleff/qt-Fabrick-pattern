#include "Triangle.h"

Triangle::Triangle()
{

}

Triangle::Triangle(double a, double b, double angle)
{
    this->a = a;
    this->b = b;
    this->angle = angle;
}

double Triangle::getSquare()
{
    return 0.5 * this->a * this->b * qSin(qDegreesToRadians(this->angle));
}

void Triangle::info()
{
    std::cout << "Square of triangle with sides a = " << this->a << ", b = " << this->b << " and angle = " << this->angle <<  " equals " << this->getSquare() << std::endl;
}

Triangle::~Triangle()
{

}
