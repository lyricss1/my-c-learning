#include <stdio.h>
#include <string.h>

struct Product{
    int id;
    char name[25];
    float price;
    int quantity;
};

int main() {
    struct Product item = {501, "Laptop", 899.99, 15};
    struct Product *itemPtr;
    itemPtr = &item;
    char *result;
    if(&item==itemPtr){
        result = "Match";
    }else{
        result = "No Match";
    }
    printf("Original Product Info:\nID: %d\nName: %s\nPrice: %.2f\nQuantity: %d\n",item.id,item.name,item.price,item.quantity);
    printf("Original Product Info:\nID: %d\nName: %s\nPrice: %.2f\nQuantity: %d\n",(*itemPtr).id,(*itemPtr).name,(*itemPtr).price,(*itemPtr).quantity);
    printf("Address of item: %p\nValue of itemPtr: %p\nAddress verification: %s\n",&item,itemPtr,result);
    return 0;
}