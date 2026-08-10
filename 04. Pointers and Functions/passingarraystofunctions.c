#include <stdio.h>

void analyzeTemperatures(int *arr, int size){
    int all = 0;
    int max = arr[0];
    int too = 0;
    for(int i=0;i<size;i++){
        all += arr[i];
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]>25){
            too++;
        }
    }

    float avg = (float)all/size;
    printf("Average temperature: %.1f\n",avg);
    printf("Highest temperature: %d\n",max);
    printf("Days above 25 degrees: %d\n",too);
}

int main() {
    int n;
    scanf("%d", &n);

    int temperatures[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &temperatures[i]);
    }

    analyzeTemperatures(temperatures,n);
    return 0;
}