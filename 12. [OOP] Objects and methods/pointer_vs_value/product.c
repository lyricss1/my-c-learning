#include <stdio.h>
#include "product.h"

void display_by_pointer(const struct Product *p){
    printf("Product: %s, Price: %.2f, Qty: %d\n",p->name,p->price,p->quantity);
}
void display_by_value(struct Product p){
    printf("Product: %s, Price: %.2f, Qty: %d\n",p.name,p.price,p.quantity);
}