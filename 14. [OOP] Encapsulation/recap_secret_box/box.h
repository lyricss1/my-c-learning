#ifndef BOX_H
#define BOX_H

typedef struct Box Box;
Box *create_box(int width, int height, int depth);
void destroy_box(Box *box);
int get_volume(const Box *box);
int set_dimensions(Box *box, int n_width, int n_height, int n_depth);

#endif
