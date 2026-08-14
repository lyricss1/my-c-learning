#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "movie.h"

Movie* create_movie(const char *title, int year){
    Movie *p = malloc(sizeof(Movie));
    p->title=malloc(strlen(title)+1);
    strcpy(p->title, title);
    p->year = year;
    return p;
}
void free_movie(Movie *movie){
    if(movie==NULL) return;
    free(movie->title);
    free(movie);
}
