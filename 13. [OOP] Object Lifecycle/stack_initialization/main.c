#include <stdio.h>
#include "temperature.h"

int main() {
    double celsius_input;
    scanf("%lf", &celsius_input);
    
    Temperature tmp = create_temperature(celsius_input);
    double fhr = temperature_to_fahrenheit(tmp);
    printf("Celsius: %.2f\nFahrenheit: %.2f\n",tmp.celsius,fhr);
    return 0;
}
