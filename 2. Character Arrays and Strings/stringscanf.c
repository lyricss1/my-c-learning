#include <stdio.h>

int main() {
    char username[30];
    char hobby[25];
    printf("Enter your username:");
    scanf("%s",username);
    printf("\nEnter your hobby:");
    scanf("%s",hobby);
    printf("\nHello %s, your hobby is %s!",username,hobby);
    return 0;
}