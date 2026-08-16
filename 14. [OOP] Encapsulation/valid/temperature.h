#ifndef TEMPERATURE_H
#define TEMPERATURE_H
typedef struct Temperature Temperature; 

Temperature *create_temperature(int initial);
void free_temperature(Temperature *temp);
int temp_get_degrees(const Temperature *temp);
int temp_set_degrees(Temperature *temp);

#endif
