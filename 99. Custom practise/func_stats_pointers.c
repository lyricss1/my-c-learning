#include <stdio.h>

void getMinMax(int *arr, int size, int *min, int *max){
	*min = arr[0];
	*max = arr[0];
	for(int i=1;i<size;i++){
		if(arr[i]<*min){
			*min = arr[i];
		}
		if (arr[i]>*max){
			*max = arr[i];
		}
	}
}

int main(){
	int numbers[6] = {12, 45, 2, 89, 34, 23};
	int min_val;
	int max_val;
	getMinMax(numbers,6,&min_val, &max_val);
	printf("min: %d\n",min_val);
	printf("max: %d\n",max_val);
	return 0;
}