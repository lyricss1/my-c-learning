#include <stdio.h>
#include "circle.h"

int main() {
    double radius;
    scanf("%lf", &radius);
    
    Circle cur = {radius};
    double cirar = circle_area(&cur);
    double circir = circle_circumference(&cur);
    printf("Area: %.2f\n", cirar);
    printf("Circumference: %.2f\n", circir);
    return 0;
}
