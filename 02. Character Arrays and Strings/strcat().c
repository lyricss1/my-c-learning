#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    char first[20];
    char last[30];
    char fullName[100];
    for(int i=0;i<n;i++){
        scanf("%s",first);
        scanf("%s",last);
        strcpy(fullName, first);
        strcat(fullName, " ");
        strcat(fullName, last);
        char greeting[150];
        strcpy(greeting, "Hello, ");
        strcat(greeting, fullName);
        strcat(greeting, "! Welcome to our program.");
        printf("%s\n",greeting);
    }
    char summary[100];
    char number[20];
    strcpy(summary, "Total people processed: ");
    sprintf(number, "%d", n);
    strcat(summary, number);
    printf("%s",summary);
    return 0;
}