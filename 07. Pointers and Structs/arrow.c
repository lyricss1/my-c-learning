#include <stdio.h>
#include <string.h>

struct Book{
    int id;
    char title[40];
    char author[30];
    float price;
    int pages;
};

int main() {
    struct Book myBook;
    struct Book *bookPtr = &myBook;
    int id;
    char title[40];
    char author[30];
    float price;
    int pages;
    
    scanf("%d", &id);
    scanf("%s", title);
    scanf("%s", author);
    scanf("%f", &price);
    scanf("%d", &pages);
    
    bookPtr->id = id;
    strcpy(bookPtr->title, title);
    strcpy(bookPtr->author, author);
    bookPtr->price = price;
    bookPtr->pages = pages;

    bookPtr->price = bookPtr->price * 0.9;
    bookPtr->pages += 50;
    float pricepg=bookPtr->price/bookPtr->pages;
    printf("Book Information:\n");
    printf("ID: %d\nTitle: %s\nAuthor: %s\nPrice: %.2f\nPages: %d\nPrice per page: %.2f\n",
        bookPtr->id,bookPtr->title,bookPtr->author,bookPtr->price,bookPtr->pages,pricepg
    );

    return 0;
}