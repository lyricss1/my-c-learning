#include <stdio.h>
#include "score.h"

int main() {
    int initial_points, new_points;
    scanf("%d", &initial_points);
    scanf("%d", &new_points);
    Score *score = create_score(initial_points);
    printf("Initial: %d\n",score_get_points(score));
    score_set_points(score, new_points);
    printf("Updated: %d\n",score_get_points(score));
    free_score(score);
    printf("Freed");
    return 0;
}
