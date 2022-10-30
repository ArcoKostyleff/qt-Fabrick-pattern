#ifndef CIRCLE_H
#define CIRCLE_H

#include <Shape.h>

class Circle: public Shape
{
private:
    double radius =0;

public:
    Circle();

    Circle(double radius);

    double getSquare() override;

    void info() override;

    void setRadius(double radius) {
        this->radius = radius;
    }

    double getRadius() {
        return this->radius;
    }

    ~Circle() override;
};

#endif // CIRCLE_H
