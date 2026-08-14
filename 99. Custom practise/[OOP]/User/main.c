#include <stdio.h>
#include <stdlib.h>
#include "user.h"

int main(){
	char username[50];
	int age;
	scanf("%s",username);
	scanf("%d",&age);
	User *usr = create_user(username, age);
	printf("Usename: %s\n,Age: %d\n",usr->username,usr->age);
	free(usr->username);
	free(usr);
	return 0;
}