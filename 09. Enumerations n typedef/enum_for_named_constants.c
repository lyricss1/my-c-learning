#include <stdio.h>

enum TrafficLight{
    RED,
    YELLOW,
    GREEN
};

int main() {
    // Считать ввод
    int input;
    scanf("%d", &input);
    enum TrafficLight currentLight;
    currentLight = input;
    printf("Current light: ");
    switch(currentLight){
        case RED:
            printf("RED\n");
            printf("Numeric value: %d\n", currentLight);
            printf("Action: Stop\n");
            break;
        case YELLOW:
            printf("YELLOW\n");
            printf("Numeric value: %d\n", currentLight);
            printf("Action: Caution\n");
            break;
        case GREEN:
            printf("GREEN\n");
            printf("Numeric value: %d\n", currentLight);
            printf("Action: Go\n");
            break;
    }
    enum TrafficLight nextLight;
    switch(currentLight){
        case RED:
            nextLight = GREEN;
            break;
        case YELLOW:
            nextLight = RED;
            break;
        case GREEN:
            nextLight = YELLOW;
            break;
    }
    printf("Next light: ");
    switch(nextLight){
        case RED:
            printf("RED\n");
            break;
        case YELLOW:
            printf("YELLOW\n");
            break;
        case GREEN:
            printf("GREEN\n");
            break;
    }
    return 0;
}