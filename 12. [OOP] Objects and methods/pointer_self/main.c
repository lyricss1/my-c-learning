#include <stdio.h>
#include "timer.h"

int main() {
    int initial_seconds, amount_to_add;
    scanf("%d", &initial_seconds);
    scanf("%d", &amount_to_add);

    struct Timer new = {initial_seconds};
    timer_tick(&new, amount_to_add);
    printf("After tick: %d\n",new.seconds);
    timer_reset(&new);
    printf("After reset: %d\n",new.seconds);
    return 0;
}
