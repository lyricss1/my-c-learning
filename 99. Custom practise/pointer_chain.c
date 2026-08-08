#include <stdio.h>

int main(){
	int secret = 777;
	int *p1 = NULL;
	int *p2 = NULL;
	int trueornot;
	p1 = &secret;
	p2 = p1;
	*p1 = 999;
	printf("%d\n",*p2);
	if(&p1==&p2){
		trueornot = 1;
	}else{
		trueornot = 0;
	}
	printf("%d\n",trueornot);
	return 0;
}