#include <stdio.h>

int main() {
    int numbers[4]={10,20,30,40};
    int *ptr;
    ptr = numbers;
    printf("Array name address: %p\n",numbers);
    printf("First element address: %p\n",&numbers[0]);
    printf("Pointer address: %p",ptr);
    printf("Value via array name: %d\n", *numbers);
    printf("Value via pointer: %d\n", *ptr);
    
    return 0;
}