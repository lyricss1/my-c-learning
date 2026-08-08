#include <stdio.h>

int add(int a, int b) {
     return a + b;
}
int sub(int a,int b){
    return a-b;
}
int del(int a,int b){
    return a/b;
}
int umn(int a,int b){
    return a*b;
}
int main() {
    int num1, num2, result;
    char ch;
    printf("Enter first num: ");
    scanf("%d", &num1);
    printf("Enter sec num: ");
    scanf("%d", &num2);
    printf("Choose + - * / : ");
    scanf(" %c", &ch);

    switch(ch){
        case '+':
            result = add(num1,num2);
            break;
        case '-':
            result = sub(num1,num2);
            break;
        case '/':
            result = del(num1,num2);
            break;
        case '*':
            result = umn(num1,num2);
            break;
        default:
            printf("Wrong num\n");
            return 1;
    }
    
    printf("Result: %d\n", result);
    return 0;

}