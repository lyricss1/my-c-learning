#ifndef USER_H
#define USER_H

typedef struct{
	char *username;
	int age;
} User;

User *create_user(const char *username, int age);

#endif