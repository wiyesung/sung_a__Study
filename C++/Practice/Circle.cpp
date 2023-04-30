#include "Circle.h"
#include "preprocessor.h"

Circle::Circle() { radius = 1;}
double Circle::getArea() {
    return 3.14 *radius*radius;
}