#include "timer.h"
#include <stdlib.h>

struct Timer{
    int seconds;
    int running;
};

Timer *create_timer(int sec){
    Timer *t = malloc(sizeof(Timer));
    t->seconds = sec;
    t->running = 1;
    return t;
}
void free_timer(Timer *t){
    if(t==NULL) return;
    free(t);
}
