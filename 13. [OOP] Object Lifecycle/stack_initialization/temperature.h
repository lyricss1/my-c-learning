#ifndef TEMPERATURE_H
#define TEMPERATURE_H

typedef struct{
    double celsius;
    char scale;
} Temperature;

Temperature create_temperature(double celsius);
double temperature_to_fahrenheit(const Temperature);

#endif
