#include <stdio.h>
int calculateSum(int *arr, int size){
    int sum = 0;
    int *ptr = arr;
    for(int i=0;i<size;i++){
        sum += *ptr;
        ptr++;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = calculateSum(arr, n);
    printf("Sum: %d",sum);
    return 0;
}