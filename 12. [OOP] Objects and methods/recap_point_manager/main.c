#include <stdio.h>
#include "point.h"

int main() {
    int x, y, dx, dy;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &dx);
    scanf("%d", &dy);
    
    Point pnt = {x, y};
    point_print(&pnt);
    point_move(&pnt, dx, dy);
    point_print(&pnt);
    return 0;
}
