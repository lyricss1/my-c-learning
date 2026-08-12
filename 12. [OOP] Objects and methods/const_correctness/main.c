#include <stdio.h>
#include "temperature.h"

int main() {
    double initial_celsius, adjustment;
    scanf("%lf", &initial_celsius);
    scanf("%lf", &adjustment);

    struct Temperature now = {initial_celsius};
    temp_display(&now);
    temp_adjust(&now, adjustment);
    temp_display(&now);
    double frg = temp_to_fahrenheit(&now);
    printf("Fahrenheit: %.1fF\n",frg);
    return 0;
}
