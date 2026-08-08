#include <stdio.h>
#define PI 3.14159
int r;
int main() {
    printf("Enter radius: ");
    scanf("%d", &r);
    float area = PI * r * r;
    printf("Area: %.2f\n", area);
    return 0;
}