#include <stdio.h>
#include <string.h>

struct Product{
    char name[30];
    float price;
    int stock;
};

int findMostExpensive(struct Product pr[], int size){
    float max = pr[0].price;
    int maxind = 0;
    for(int i=0; i<size; i++){
        if(pr[i].price>max){
            max = pr[i].price;
            maxind = i;
        }
    }
    return maxind;
}

float calculateTotalValue(struct Product pr[], int size){
    float total = 0;
    for(int i=0; i<size; i++){
        total += pr[i].price * pr[i].stock;
    }
    return total;
}

int findLowStock(struct Product pr[], int size, int threshold){
    int low = 0;
    for(int i=0; i<size; i++){
        if(pr[i].stock<threshold){
            low++;
        }
    }
    return low;
}

int main() {
    struct Product inventory[3];
    for (int i = 0; i < 3; i++) {
        scanf("%s", inventory[i].name);
        scanf("%f", &inventory[i].price);
        scanf("%d", &inventory[i].stock);
    }
    
    for (int i = 0; i < 3; i++) {
        printf("Product %d: %s - Price: %.2f, Stock: %d\n",i,inventory[i].name,inventory[i].price,inventory[i].stock);
    }
    
    int mst = findMostExpensive(inventory, 3);
    printf("Most expensive product: %s\n",inventory[mst].name);
    float total = calculateTotalValue(inventory, 3);
    printf("Total inventory value: %.2f\n",total);
    int threshold;
    scanf("%d", &threshold);
    int low = findLowStock(inventory, 3, threshold);
    printf("Products with low stock: %d\n",low);

    if(inventory[mst].stock>10){
        printf("Most expensive product is well stocked\n");
    }else{
        printf("Most expensive product needs restocking\n");
    }
    
    return 0;
}