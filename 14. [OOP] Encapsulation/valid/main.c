#include <stdio.h>
#include "temperature.h"

int main() {
    int initial, valid_temp, invalid_temp;
    scanf("%d", &initial);
    scanf("%d", &valid_temp);
    scanf("%d", &invalid_temp);
    
    Temperature *temp = create_temperature(initial);
    printf("Initial: %d\n",temp_get_degrees(temp));
    printf("Set %d: %d\n",invalid_temp,temp_set_degrees(temp, invalid_temp));
    printf("After invalid: %d\n",temp_get_degrees(temp));
    printf("Set %d: %d\n",valid_temp,temp_set_degrees(temp, valid_temp));
    printf("After valid: %d\n",temp_get_degrees(temp));
    free_temperature(temp);
    printf("Freed");
    return 0;
}
