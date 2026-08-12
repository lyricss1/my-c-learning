#ifndef TIMER_H
#define TIMER_H

struct Timer{
    int seconds;
};

void timer_tick(struct Timer *self, int amount);
void timer_reset(struct Timer *self);
#endif