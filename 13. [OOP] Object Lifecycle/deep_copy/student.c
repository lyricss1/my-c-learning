#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

Student *create_student(char *name, int grade){
    Student *p = malloc(sizeof(Student));
    p->name = malloc(strlen(name)+1);
    strcpy(p->name, name);
    p->grade = grade;
    return p;
}
Student *clone_student(const Student *original){
    Student *cpy = malloc(sizeof(Student));
    cpy->name = malloc(strlen(original->name)+1);
    strcpy(cpy->name, original->name);
    cpy->grade = original->grade;
    return cpy;
}
void free_student(Student *stud){
    if(stud==NULL) return;
    free(stud->name);
    free(stud);
}