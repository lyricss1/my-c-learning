#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stringobj.h"

StringObject *create_string(const char *str){
    StringObject *p = malloc(sizeof(StringObject));
    p->str = malloc(strlen(str)+1);
    strcpy(p->str, str);
    return p;
}
void print_string(const StringObject *obj){
    printf("Text: %s\n",obj->str);
}
void free_string(StringObject *obj){
    if(obj==NULL) return;
    free(obj->str);
    free(obj);
}