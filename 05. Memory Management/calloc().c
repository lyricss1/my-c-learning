#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    int sum = 0;
    scanf("%d", &size);
    int *arr = (int*)calloc(size, sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed!\n");
        return -1;
    }else{printf("Memory allocated and initialized to zero!\n");}
    printf("Initial values: ");
    for(int i = 0; i < size; i++){
        if(i > 0)
            printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("Updated values: ");
    for(int i = 0; i < size; i++){
        if(i > 0)
            printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    printf("Sum: %d\n",sum);
    free(arr);
    printf("Memory freed!");
    return 0;
}