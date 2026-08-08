#include <stdio.h>

int main() {
    struct Book{
        int id;
        char title[50];
        int pages;
        float price;
    };
    printf("Book struct defined successfully!\n");
    int bytes_book = sizeof(struct Book);
    printf("Size of Book struct: %d bytes\n",bytes_book);
    printf("Size of id: %d bytes\n", sizeof(int));
    printf("Size of title: %d bytes\n", sizeof(char)*50);
    printf("Size of pages: %d bytes\n", sizeof(int));
    printf("Size of price: %d bytes\n", sizeof(float));
    return 0;
}