#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle final : public Shape
{
public:
    Rectangle();

    Rectangle(double a, double b);

    double getSquare() override;

    void info() override;

    ~Rectangle() override;

protected:
    double m_a {0};
    double m_b = 0;
};

#endif // RECTANGLE_H
