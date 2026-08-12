#include <stdio.h>
#include "counter.h"

int main() {
    int starting_value;
    int num_increments;
    scanf("%d", &starting_value);
    scanf("%d", &num_increments);
    
    struct Counter count = {starting_value};
    for(int i=0;i<num_increments;i++){
        counter_increment(&count);
    }
    printf("Final value: %d",counter_get(&count));
    return 0;
}
