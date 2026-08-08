#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char *coin[] = {"Orel","Reshka"};
    srand(time(NULL));
    int player;
    int monetka = rand() % 2;

    printf("Choose: [1]Orel or [2]Reshka?\n");
    scanf("%d",&player);
    if(player < 1 || player>2){
        printf("Invalid!");
        return 1;
    }
    player--;
    int pc = 1 - player;

    printf("--------------------\n");
    printf("You: %s\n", coin[player]);
    printf("Pc: %s\n", coin[pc]);
    printf("--------------------\n");
    printf("Coin droped on: %s\n",coin[monetka]);
    if(monetka == pc){
        printf("PC WON!\n");
    } else {
        printf("YOU WON!\n");
    }

    return 0;
}