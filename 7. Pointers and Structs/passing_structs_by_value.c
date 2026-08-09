#include <stdio.h>
#include <string.h>

struct Rectangle{
    int width;
    int height;
    char color[15];
};
void displayRectangle(struct Rectangle rect1){
    int area = rect1.width*rect1.height;
    printf("Rectangle Details:\n");
    printf("Width: %d\nHeight: %d\nColor: %s\nArea: %d\n",rect1.width,rect1.height,rect1.color,area);
}
void modifyRectangle(struct Rectangle rect1){
    rect1.width = rect1.width*2;
    rect1.height = rect1.height*2;
    strcpy(rect1.color, "Modified");
    printf("Inside modifyRectangle function:\n");
    displayRectangle(rect1);
}
int main() {
    int width, height;
    char color[15];
    scanf("%d", &width);
    scanf("%d", &height);
    scanf("%s", color);
    
    struct Rectangle rect;
    rect.width = width;
    rect.height = height;
    strcpy(rect.color, color);
    
    printf("Original rectangle:\n");
    displayRectangle(rect);
    modifyRectangle(rect);
    printf("After modifyRectangle call:\n");
    displayRectangle(rect);
    return 0;
}