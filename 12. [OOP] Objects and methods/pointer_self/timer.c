#include "timer.h"

void timer_tick(struct Timer *self, int amount){
    self->seconds += amount;
}
void timer_reset(struct Timer *self){
    self->seconds = 0;
}