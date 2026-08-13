#include <stdio.h>
#include <stdlib.h>
#include "book.h"

int main() {
    char title[256];
    int pages;

    fgets(title, sizeof(title), stdin);
    for (int i = 0; title[i]; i++) {
        if (title[i] == '\n') {
            title[i] = '\0';
            break;
        }
    }
    scanf("%d", &pages);
    Book *book = create_book(title, pages);
    printf("Title: %s\n", book->title);
    printf("Pages: %d\n", book->pages);
    free(book->title);
    free(book);
    return 0;
}
