#include <stdio.h>
#include "point.h"

void point_move(Point *self, int x, int y){
    self->x += x;
    self->y += y;
}

void point_print(const Point *self){
    printf("Point: (%d, %d)\n",self->x,self->y);
}