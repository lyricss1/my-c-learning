#include <stdio.h>

struct Student{
    int id;
    float grade;
};

int main() {
    struct Student student1;

    int id;
    float grade, bonus;
    char *status;
    scanf("%d", &id);
    scanf("%f", &grade);
    
    student1.id = id;
    student1.grade = grade;
    if(student1.grade>100.0){
        student1.grade = 100.0;
    }
    if(student1.grade<0.0) {
        student1.grade = 0.0;
    }
    bonus = student1.grade + 5.0;
    if(bonus>100.0){
        bonus = 100.0;
    }

    if(student1.grade>=90.0) {
        status = "Excellent";
    }
    else if(student1.grade>=80.0) {
        status = "Good";
    }
    else if(student1.grade>=70.0) {
        status = "Average";
    }
    else {
        status = "Needs Improvement";
    }

    printf("Student Information:\n");
    printf("ID: %d\n",student1.id);
    printf("Original Grade: %.1f\n",student1.grade);
    printf("Bonus Grade: %.1f\n",bonus);
    printf("Grade Status: %s\n",status);
    
    return 0;
}