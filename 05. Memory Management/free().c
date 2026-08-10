#include <stdio.h>
#include <stdlib.h>

int main() {
    int count;
    int sum = 0;
    scanf("%d", &count);
    int bytes = count*sizeof(int);
    int *arr = (int*)malloc(bytes);
    if(arr == NULL){
        printf("Memory allocation failed!\n");
        return -1;
    }else{printf("Memory allocated successfully!\n");}
    for(int i=0;i<count;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    int max = arr[0];
    for(int i=0;i<count;i++){
        if(arr[i]>max){max=arr[i];}
    }
    printf("Sum: %d\nMaximum: %d\n",sum,max);
    free(arr);
    printf("Memory freed successfully!\n");
    return 0;
}