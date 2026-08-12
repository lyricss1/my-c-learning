#ifndef COUNTER_H
#define COUNTER_H

struct Counter{
    int pol;
};

void counter_increment(struct Counter *count);
int counter_get(struct Counter *count);

#endif