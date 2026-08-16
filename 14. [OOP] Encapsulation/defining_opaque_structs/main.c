#include <stdio.h>
#include "timer.h"

int main() {
    int seconds;
    scanf("%d", &seconds);
    
    Timer *timer = create_timer(seconds);
    printf("Timer created\n");
    free_timer(timer);    
    printf("Timer freed");    
    return 0;
}
