#include <stdio.h>

int main() {
    int values[6] = {5,15,25,35,45,55};
    for(int i=0;i<6;i++){
        printf("Element %d: %d\n",i,*(values + i));
    }
    printf("Third element via pointer: %d\n",*(values + 2));
    printf("Third element via array: %d",values[2]);
    return 0;
}