#include <stdio.h>
#include <string.h>
#include "types.h"

int main() {
    char name[50];
    int age;
    int employee_id;
    
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = '\0';
    scanf("%d", &age);
    scanf("%d", &employee_id);
    
    Employee employee;
    strcpy(employee.person.name, name);
    employee.person.age = age;
    employee.employee_id = employee_id;
    print_employee(&employee);
    return 0;
}
