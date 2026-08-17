#include <stdlib.h>
#include "box.h"

struct Box{
    int width;
    int height;
    int depth;
};
Box *create_box(int width, int height, int depth){
    Box *cr = malloc(sizeof(Box));
    cr->width=width;
    cr->height=height;
    cr->depth=depth;
    return cr;
}
void destroy_box(Box *box){
    free(box);
}
int get_volume(const Box *box){
    return box->width*box->height*box->depth;
}
int set_dimensions(Box *box, int n_width, int n_height, int n_depth){
    if(n_width>0&&n_height>0&&n_depth>0){
        box->width=n_width;
        box->height=n_height;
        box->depth=n_depth;
        return 1;
    }else{return 0;}
}
