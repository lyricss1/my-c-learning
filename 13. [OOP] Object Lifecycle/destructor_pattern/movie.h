#ifndef MOVIE_H
#define MOVIE_H

typedef struct{
    char *title;
    int year;
} Movie;

Movie* create_movie(const char *title, int year);
void free_movie(Movie *movie);

#endif
