#ifndef SHAPE_H
#define SHAPE_H
#include <QtMath>
#include <iostream>
#include <memory>

// abstract Shape class
class Shape
{

public:

    static std::unique_ptr<Shape> createShape(char type);
    virtual double getSquare() =0;
    virtual void info() =0;
    virtual ~Shape() {};

protected:

    const double Pi = 3.1415;
};

#endif // SHAPE_H
