#include <stdio.h>
#include <string.h>
#include "product.h"

int main() {
    char name[50];
    double price;
    int quantity;

    scanf("%s", name);
    scanf("%lf", &price);
    scanf("%d", &quantity);
    
    struct Product prd;
    strcpy(prd.name, name);
    prd.price = price;
    prd.quantity = quantity;
    display_by_value(prd);
    display_by_pointer(&prd);
    return 0;
}
