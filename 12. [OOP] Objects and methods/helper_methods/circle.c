#include "circle.h"
#define pi 3.14159

double circle_area(const Circle *self){
    double cirar = pi*self->radius*self->radius;
    return cirar;
}
double circle_circumference(const Circle *self){
    double circir = 2*pi*self->radius;
    return circir;
}