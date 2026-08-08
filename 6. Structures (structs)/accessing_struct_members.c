#include <stdio.h>
#include <string.h>

struct Car{
    int year;
    char brand[20];
    int mileage;
    float price;
};

int main() {
    struct Car myCar;
    int year;
    char brand[20];
    int mileage;
    float price;
    
    scanf("%d", &year);
    scanf("%s", brand);
    scanf("%d", &mileage);
    scanf("%f", &price);
    myCar.year = year;
    strcpy(myCar.brand, brand);
    myCar.mileage = mileage;
    myCar.price = price;
    myCar.mileage += 1000;
    myCar.price -= 500.0;
    printf("Car Details:\n");
    printf("Year: %d\n",myCar.year);
    printf("Brand: %s\n",myCar.brand);
    printf("Mileage: %d\n",myCar.mileage);
    printf("Price: %.2f\n",myCar.price);
    
    return 0;
}