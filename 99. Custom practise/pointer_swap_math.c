#include <stdio.h>

int main(){
	int a = 10;
	int b = 20;
	int *ptr = NULL;

	if(ptr == NULL){
		printf("ptr is null\n");
	}

	ptr = &a;
	*ptr += 15;

	ptr = &b;
	*ptr = *ptr*2;
	printf("a = %d, b = %d\n", a, b);
	return 0;
}