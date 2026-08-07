#include <stdio.h>
#include <stdlib.h>

int main() {
    int input_value;
    scanf("%d", &input_value);
    int *ptr = (int*)malloc(sizeof(int));
    if(ptr == NULL){return 1;}
    *ptr = input_value;
    printf("Stored value: %d\n", *ptr);
    *ptr = (*ptr) * (*ptr);
    printf("Squared value: %d\n", *ptr);
    return 0;
}