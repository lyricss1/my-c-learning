#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    int len, lowercase, uppercase, numbers, special;
    char lower[] = "abcdefghijklmnopqrstuvwxyz";
    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char digits[] = "0123456789";
    char special1[] = "!@#$%^&*()-_=+";
    char symbols[200] = "";
    srand(time(NULL));
    //int size = sizeof(symbols) - 1;

    printf("Enter pass size: ");
    scanf("%d",&len);
    printf("Use lowercase? (0/1): ");
    scanf("%d",&lowercase);
    printf("Use uppercase? (0/1): ");
    scanf("%d",&uppercase);
    printf("Use numbers? (0/1): ");
    scanf("%d",&numbers);
    printf("Use special? (0/1): ");
    scanf("%d",&special);
    if (lowercase == 1){
        strcat(symbols, lower);
       // int size = strlen(symbols)
    }
    if (uppercase == 1){
        strcat(symbols, upper);
       // int size = strlen(symbols);
    }
    if (numbers == 1){
        strcat(symbols, digits);
       //int size = strlen(symbols);
    }
    if (special == 1){
        strcat(symbols, special1);
        //int size = strlen(symbols);
    }
    int size = strlen(symbols);

    printf("Password: ");
    for (int i = 0; i < len; i++) {
        int index = rand() % size;
        printf("%c", symbols[index]);
    }
    printf("\n");
    return 0;

}