#include "Circle.h"

Circle::Circle() {

}

Circle::Circle(double radius) {
    this->radius = radius;
}

double Circle::getSquare(){
    return Pi * pow(this->radius,2);
}

void Circle::info(){
    std::cout << "Square of circle with radius = "<< this->radius << " equals " << this->getSquare() << std::endl;
}

Circle::~Circle() {

}

