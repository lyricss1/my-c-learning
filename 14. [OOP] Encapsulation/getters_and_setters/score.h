#ifndef SCORE_H
#define SCORE_H

typedef struct Score Score;
Score *create_score(int pnt);
void free_score(Score *score);
int score_get_points(const Score *score);
void score_set_points(Score *score, int set);

#endif

