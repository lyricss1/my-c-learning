#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int bytes = n*sizeof(int);
    int *arr = (int*)malloc(bytes);
    if(arr == NULL){
        printf("Memory allocation failed!\n");
        return -1;
    }else{printf("Memory allocation successful!\n");}
    int sum = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("Sum: %d\n",sum);
    printf("Bytes allocated: %d\n",bytes);
    return 0;
}