#ifndef CIRCLE_H
#define CIRCLE_H

typedef struct{
    double radius;
} Circle;

double circle_area(const Circle *self);
double circle_circumference(const Circle *self);

#endif