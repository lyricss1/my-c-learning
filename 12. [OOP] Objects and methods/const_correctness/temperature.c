#include <stdio.h>
#include "temperature.h"

void temp_display(const struct Temperature *self){
    printf("Current: %.1fC\n",self->celsius);
}
void temp_adjust(struct Temperature *self, double amount){
    self->celsius += amount;
}
double temp_to_fahrenheit(const struct Temperature *self){
    double tmp = self->celsius * 9.0 / 5.0 + 32.0;
    return tmp;
}