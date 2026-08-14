#include <stdio.h>
#include <stdlib.h>
#include "movie.h"

int main() {
    char title[100];
    int year;

    scanf("%[^\n]", title);
    scanf("%d", &year);
    Movie *mv = create_movie(title, year);
    printf("Movie: %s (%d)\n",mv->title,mv->year);
    free_movie(mv);
    printf("Memory freed");
    return 0;
}
