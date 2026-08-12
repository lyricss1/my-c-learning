#include "counter.h"

void counter_increment(struct Counter *count){
    count->pol++;
}   
int counter_get(struct Counter *count){
    return count->pol;
}