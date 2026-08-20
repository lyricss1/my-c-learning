#include <stdio.h>
#include "types.h"

void print_employee(Employee *emp){
    printf("Employee: %s\n",emp->person.name);
    printf("Age: %d\n",emp->person.age);
    printf("ID: %d\n",emp->employee_id);
}