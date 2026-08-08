#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    double sum = 0;
    double *arr = (double*)malloc(n*sizeof(double));
    int bytes = n*sizeof(double);
    for(int i=0;i<n;i++){
        scanf("%lf",&arr[i]);
        sum += arr[i];
    }
    double max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    double avg = sum/n;
    printf("Memory allocated: %d bytes\n",bytes);
    printf("Average: %.2f\n",avg);
    printf("Largest: %.2f\n",max);
    return 0;
}