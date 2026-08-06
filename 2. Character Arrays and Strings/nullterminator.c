#include <stdio.h>

int main() {
    char name[5]={'J', 'o', 'h', 'n','\0'};
    char city[7]={'B','o','s','t','o','n','\0'};
    char test[4]={'A', 'B', 'C', 'D'};
    printf("Name: %s\n",name);
    printf("City: %s\n",city);
    printf("Test without null terminator: %s",test);
    return 0;
}