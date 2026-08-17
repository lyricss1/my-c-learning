#include <stdio.h>
#include "box.h"

int main() {
    int width, height, depth;
    scanf("%d", &width);
    scanf("%d", &height);
    scanf("%d", &depth);
    int new_w, new_h, new_d;
    scanf("%d", &new_w);
    scanf("%d", &new_h);
    scanf("%d", &new_d);
    
    Box *new = create_box(width,height,depth);
    printf("Volume: %d\n",get_volume(new));
    int tryy = set_dimensions(new, new_w, new_h, new_d);
    printf("Set: %d\n",tryy);
    printf("Volume: %d\n",get_volume(new));
    destroy_box(new);
    printf("Destroyed");
    return 0;
}
