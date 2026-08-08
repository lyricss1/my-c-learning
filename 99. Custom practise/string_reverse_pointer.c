#include <stdio.h>

int main(){
	char text[] = "Hello";
	char *start = text;
	char *end = text;
	while(*end != '\0'){
		end++;
	}
	end--;
	while(start<end){
		char temp = *start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
	printf("%s\n",text);
	return 0;
}