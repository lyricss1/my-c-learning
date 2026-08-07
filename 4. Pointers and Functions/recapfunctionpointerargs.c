#include <stdio.h>

void findMinMax(int *arr, int size, int *min, int *max){
    *min = arr[0];
    *max = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>*max){
            *max = arr[i];
        }
        if(arr[i]<*min){
            *min = arr[i];
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int minValue, maxValue;
    
    findMinMax(arr, n, &minValue, &maxValue);
    printf("Minimum: %d\n", minValue);
    printf("Maximum: %d\n", maxValue);
    
    return 0;
}