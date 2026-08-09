#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car{
    int year;
    char brand[20];
    char model[25];
    float price;
    int mileage;
};

int main() {
    struct Car *carPtr = malloc(sizeof(struct Car));
    if (carPtr == NULL){
        printf("Memory allocation failed\n");
    } else{
        printf("Memory allocation successful\n");
    }
    int year, mileage;
    char brand[20], model[25];
    float price;
    
    scanf("%d", &year);
    scanf("%s", brand);
    scanf("%s", model);
    scanf("%f", &price);
    scanf("%d", &mileage);
    
    carPtr->year = year;
    strcpy(carPtr->brand, brand);
    strcpy(carPtr->model, model);
    carPtr->price = price;
    carPtr->mileage = mileage;
    int age = 2024 - carPtr->year;
    float depr;
    if(age>10){
        depr = 0.6;
    }else{
        depr = 0.8;
    }
    //carPtr->price * depr;
    float curval = carPtr->price*depr;
    printf("Car Information:\n");
    printf("Year: %d\n",carPtr->year);
    printf("Brand: %s\n",carPtr->brand);
    printf("Model: %s\n",carPtr->model);
    printf("Original Price: %.2f\n",carPtr->price);
    printf("Mileage: %d\n",carPtr->mileage);
    printf("Age: %d years\n",age);
    printf("Current Value: %.2f\n",curval);

    free(carPtr);
    printf("Memory freed successfully");
    return 0;
}