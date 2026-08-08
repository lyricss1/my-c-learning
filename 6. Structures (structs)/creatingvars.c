#include <stdio.h>

int main() {
    struct Rectangle{
        int width;
        int height;
    };
    struct Student{
        int id;
        char name[30];
        float gpa;
    };
    struct Rectangle rect1, rect2;
    struct Student studen1, student2, student3;
    int rect_bytes = sizeof(struct Rectangle);
    int stud_bytes = sizeof(struct Student);
    printf("Rectangle variable rect1 created\nRectangle variable rect2 created\nStudent variable student1 created\nStudent variable student2 created\nStudent variable student3 created\nTotal struct variables created: 5\n");
    printf("Memory per Rectangle: %d bytes\n",rect_bytes);
    printf("Memory per Student: %d bytes",stud_bytes);
    return 0;
}