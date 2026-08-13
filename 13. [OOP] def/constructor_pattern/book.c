#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "book.h"

Book *create_book(const char *title, int pages){
    Book *p = malloc(sizeof(Book));
    p->title=malloc(strlen(title)+1);
    strcpy(p->title, title);
    p->pages = pages;
    return p;
}