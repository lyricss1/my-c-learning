#include <stdlib.h>
#include "temperature.h"

struct Temperature{
    int degrees;
};

Temperature *create_temperature(int initial){
    Temperature *new = malloc(sizeof(Temperature));
    new->degrees = initial;
    return new;
}
void free_temperature(Temperature *temp){
    free(temp);
}
int temp_get_degrees(const Temperature *temp){
    return temp->degrees;
}
int temp_set_degrees(Temperature *temp, int set){
    if(set<-50||set>150){
        return 0;
    }
    temp->degrees = set;
    return 1;
}
