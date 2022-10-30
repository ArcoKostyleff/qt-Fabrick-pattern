#include "Rectangle.h"

Rectangle::Rectangle()
{

}

Rectangle::Rectangle(double a, double b)
{
    m_a = a;
    this->b = b;
}

double Rectangle::getSquare()
{
    return this->a * this->b;
}

void Rectangle::info()
{
    std::cout << "Square of rectangle with sides a = " << this->a << ", b = " << this->b << " equals " << this->getSquare() << std::endl;
}

Rectangle::~Rectangle()
{

}
