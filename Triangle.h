#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <Shape.h>

class Triangle : public Shape
{
public:
    Triangle();

    Triangle(double a, double b, double angle);

    double getSquare() override;

    void info() override;

    ~Triangle() override;

protected:
    double a = 0;
    double b = 0;
    double angle = 0;
};

#endif // TRIANGLE_H
