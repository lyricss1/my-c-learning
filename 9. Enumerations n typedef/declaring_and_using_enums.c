#include <stdio.h>

enum TaskStatus {
    PENDING,
    IN_PROGRESS,
    COMPLETED,
    CANCELLED
};

int main() {
    enum TaskStatus task1;
    enum TaskStatus task2;
    enum TaskStatus task3;

    int input1, input2, input3;

    scanf("%d", &input1);
    scanf("%d", &input2);
    scanf("%d", &input3);

    task1 = input1;
    task2 = input2;
    task3 = input3;

    printf("Task 1 status: %d\n", task1);
    printf("Task 2 status: %d\n", task2);
    printf("Task 3 status: %d\n", task3);

    int pending = 0;
    int inProgress = 0;
    int completed = 0;
    int cancelled = 0;

    if (task1 == PENDING) {
        pending++;
    }
    if (task1 == IN_PROGRESS) {
        inProgress++;
    }
    if (task1 == COMPLETED) {
        completed++;
    }
    if (task1 == CANCELLED) {
        cancelled++;
    }

    if (task2 == PENDING) {
        pending++;
    }
    if (task2 == IN_PROGRESS) {
        inProgress++;
    }
    if (task2 == COMPLETED) {
        completed++;
    }
    if (task2 == CANCELLED) {
        cancelled++;
    }

    if (task3 == PENDING) {
        pending++;
    }
    if (task3 == IN_PROGRESS) {
        inProgress++;
    }
    if (task3 == COMPLETED) {
        completed++;
    }
    if (task3 == CANCELLED) {
        cancelled++;
    }
    int active = pending + inProgress;
    printf("Pending tasks: %d\n", pending);
    printf("In progress tasks: %d\n", inProgress);
    printf("Completed tasks: %d\n", completed);
    printf("Cancelled tasks: %d\n", cancelled);
    printf("Active tasks: %d\n", active);
    return 0;
}