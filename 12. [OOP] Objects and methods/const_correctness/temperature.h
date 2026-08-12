#ifndef TEMPERATURE_H
#define TEMPERATURE_H

struct Temperature{
    double celsius;
};

void temp_display(const struct Temperature *self);
void temp_adjust(struct Temperature *self, double amount);
double temp_to_fahrenheit(const struct Temperature *self);

#endif