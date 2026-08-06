#include <stdio.h>

int main() {
    int data[5]={12,24,36,48,60};
    int *ptr;
    ptr = data;
    for(int i=0;i<5;i++){
        printf("Value: %d, Address: %p\n",*ptr,ptr);
        ptr++;
    }
    ptr = data;
    printf("Third element: %d\n",*(ptr + 2));
    printf("Last element: %d",*(ptr + 4));
    return 0;
}