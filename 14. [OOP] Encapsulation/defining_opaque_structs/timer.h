#ifndef TIMER_H
#define TIMER_H

typedef struct Timer Timer;

Timer *create_timer(int sec);
void free_timer(Timer *t);

#endif
