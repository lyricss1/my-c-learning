#include <stdio.h>
#include "calc.h"

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    int add_ret = add(a, b);
    int sub_ret = subtract(a, c);
    int mul_ret = multiply(b, c);

    printf("Sum: %d\nDifference: %d\nProduct: %d",add_ret,sub_ret,mul_ret);
    return 0;
}
