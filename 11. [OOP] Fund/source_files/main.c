#include <stdio.h>
#include "math_ops.h"

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    int mlt = multiply(a, b);
    int sbtr = subtract(a, b);
    
    printf("Product: %d\n",mlt);
    printf("Difference: %d\n",sbtr);

    return 0;
}
