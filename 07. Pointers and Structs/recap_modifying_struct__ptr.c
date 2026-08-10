#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee{
    int id;
    char name[50];
    char department[30];
    float salary;
    int yearsOfService;
};

void fillEmployeeData(struct Employee *emp){
    scanf("%d",&emp->id);
    scanf("%s",emp->name);
    scanf("%s",emp->department);
    scanf("%f",&emp->salary);
    scanf("%d",&emp->yearsOfService);
    float bonus;
    if(emp->yearsOfService>=5){
        bonus = emp->salary * 0.10;
    }else{
        bonus = emp->salary * 0.05;
    }
    emp->salary += bonus;
}

void displayEmployee(struct Employee *emp){
    printf("Employee Details:\n");
    printf("ID: %d\n",emp->id);
    printf("Name: %s\n",emp->name);
    printf("Department: %s\n",emp->department);
    printf("Salary: %.2f\n",emp->salary);
    printf("Years of Service: %d\n",emp->yearsOfService);
}

void promoteEmployee(struct Employee *emp){
    emp->salary *= 1.15;
    emp->yearsOfService++;
    printf("Employee promoted successfully!\n");
}

int main() {
    struct Employee *empPtr = malloc(sizeof(struct Employee));
    if(empPtr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }else{
        printf("Memory allocated successfully\n");
    }
    fillEmployeeData(empPtr);
    printf("Initial employee data:\n");
    displayEmployee(empPtr);
    promoteEmployee(empPtr);
    printf("After promotion:\n");
    displayEmployee(empPtr);
    free(empPtr);
    printf("Memory freed successfully\n");
    return 0;
}