#include <stdio.h>
#include <stdlib.h>
#include "student.h"

int main() {
    char name[100];
    int grade;
    scanf("%s", name);
    scanf("%d", &grade);
    
    Student *new = create_student(name, grade);
    Student *copy = clone_student(new);
    printf("Original: %s, Grade: %d\n",new->name,new->grade);
    printf("Clone: %s, Grade: %d\n",copy->name,copy->grade);
    free_student(new);
    free_student(copy);
    printf("Both freed\n");
    
    return 0;
}
