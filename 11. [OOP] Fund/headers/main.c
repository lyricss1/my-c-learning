#include <stdio.h>
#include "greet.h"

void greet(const char *name){
    printf("Hello, %s!",name);
}

int main() {
    char name[100];
    scanf("%s", name);
    greet(name);
    return 0;
}
