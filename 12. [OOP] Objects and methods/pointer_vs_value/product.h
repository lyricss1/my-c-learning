#ifndef PRODUCT_H
#define PRODUCT_H

struct Product{
    char name[50];
    double price;
    int quantity;
};

void display_by_pointer(const struct Product *p);
void display_by_value(struct Product p);

#endif
