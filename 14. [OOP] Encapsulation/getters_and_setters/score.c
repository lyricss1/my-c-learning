#include <stdlib.h>
#include "score.h"

struct Score{
    int points;
};
Score *create_score(int pnt){
    Score *sc = malloc(sizeof(Score));
    sc->points = pnt;
    return sc;
}
void free_score(Score *score){
    if(score==NULL) return;
    free(score);
}
int score_get_points(const Score *score){
    return score->points;
}
void score_set_points(Score *score, int set){
    score->points = set;
}