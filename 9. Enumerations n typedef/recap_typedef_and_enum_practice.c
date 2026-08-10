#include <stdio.h>

// TODO: Определите здесь ваш enum ShapeType и typedef
enum ShapeType{
    CIRCLE,
    RECTANGLE,
    TRIANGLE
};
typedef enum ShapeType Shape;

float calculateArea(Shape shape, float dimension1, float dimension2){
    float area;
    switch(shape){
        case CIRCLE:
            area = 3.14159*dimension1*dimension1;
            return area;
        case RECTANGLE:
            area = dimension1*dimension2;
            return area;
        case TRIANGLE:
            area = 0.5*dimension1*dimension2;
            return area;    
    }
}

void printShapeInfo(Shape shape){
    switch(shape){
        case CIRCLE:
            printf("Shape: Circle\n");
            break;
        case RECTANGLE:
            printf("Shape: Rectangle\n");
            break;
        case TRIANGLE:
            printf("Shape: Triangle\n");
            break;
    }
}

int main() {
    Shape selectedShape;
    int shapeChoice;
    float dim1, dim2;
    scanf("%d", &shapeChoice);
    scanf("%f", &dim1);
    scanf("%f", &dim2);
    selectedShape = (Shape)shapeChoice;
    printShapeInfo(selectedShape);
    printf("Dimensions: %.1f %.1f\n",dim1,dim2);
    float rarea = calculateArea(selectedShape,dim1,dim2);
    printf("Area: %.2f\n",rarea);
    if(rarea<10.0){
        printf("Category: Small\n");
    }else if(rarea<=50.0){
        printf("Category: Medium\n");
    }else{
        printf("Category: Large\n");
    }
    return 0;
}