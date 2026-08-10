#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int sum = 0;
    scanf("%d", &n);
    int bytes = n*sizeof(int);
    int *arr = (int*)malloc(bytes);
    if(arr == NULL){
        printf("Memory allocation failed!\n");
        return -1;
    }else{printf("Array of size %d created successfully!\n",n);}
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    int avg = sum/n;
    int min = arr[0];
    int c_avg = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<min){min = arr[i];}
        if(arr[i]>avg){c_avg++;}
    }
    printf("Sum: %d\nMinimum: %d\nElements above average: %d\nMemory used: %d bytes\n", sum, min, c_avg, bytes);
    free(arr);
    printf("Memory successfully freed!");
    return 0;
}