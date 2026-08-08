#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int seed = time(NULL);
    srand(seed);
    int pc = rand() % 3 + 1;
    int chose;
    printf("--------------------\n");
    printf("Seed: %d\n", seed);
    printf("--------------------\n");
    printf("Enter your choice:\n");
    printf("[1] rock\n");
    printf("[2] paper\n");
    printf("[3] scissors\nYou: ");
    scanf("%d", &chose);
    printf("--------------------\n");
    printf("You chose: ");
    if (chose == 1)
        printf("Rock\n");
    else if (chose == 2)
        printf("Paper\n");
    else
        printf("Scissors\n");
    printf("Computer chose: ");
    if (pc == 1)
        printf("Rock\n");
    else if (pc == 2)
        printf("Paper\n");
    else
        printf("Scissors\n");
    //printf("Computer: %d\n", pc);
    if (chose < 1 || chose > 3) {
        printf("Invalid choice!\n");
        return 1;
    }   

    if (chose == pc) {
        printf("Oops!");
    }
    else if ((chose == 1&&pc == 3)||(chose == 2&&pc == 1)||(chose == 3&&pc == 2)) {
        printf("You won!");
    }
    else{
        printf("Computer won!");
    }
}