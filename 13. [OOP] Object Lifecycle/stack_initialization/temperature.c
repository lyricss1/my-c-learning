#include "temperature.h"

Temperature create_temperature(double celsius){
    Temperature temp = {celsius};
    temp.scale = 'C';
    return temp;
}
double temperature_to_fahrenheit(const Temperature temp){
    double fahrenheit = temp.celsius * 9.0 / 5.0 + 32.0;
    return fahrenheit;
}
