#ifndef TYPES_H
#define TYPES_H

typedef struct{
    char name[50];
    int age;
} Person;

typedef struct{
    Person person;
    int employee_id;
} Employee;

void print_employee(Employee *emp);

#endif
