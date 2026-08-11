#include <stdio.h>
#include "distance.h"

int main() {
    int x1, y1, x2, y2;
    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);
    
    int dst = distance_squared(x1,y1,x2,y2);
    printf("Squared distance: %d",dst);
    return 0;
}
