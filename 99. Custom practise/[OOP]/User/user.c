#include "user.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

User *create_user(const char *username, int age){
	User *user = malloc(sizeof(User));
	user->username = malloc(strlen(*username)+1);
	strcpy(user->username, username);
	user->age = age;
	return user;
}