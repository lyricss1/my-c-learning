#ifndef STUDENT_H
#define STUDENT_H

typedef struct{
    char *name;
    int grade;
} Student;

Student *create_student(char *name, int grade);
Student *clone_student(const Student *original);
void free_student(Student *stud);

#endif