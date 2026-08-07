#include <stdio.h>

void tryToModify(int number){
    number = number + 50;
    printf("Inside function: %d\n",number);
}

int main() {
    int original = 25;
    printf("Before function call: %d\n",original);
    tryToModify(original);
    printf("After function call: %d\n",original);
    return 0;
}