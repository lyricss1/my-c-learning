#ifndef STRINGOBJ_H
#define STRINGOBJ_H

typedef struct{
    char *str;
}StringObject;

StringObject *create_string(const char *str);
void print_string(const StringObject *obj);
void free_string(StringObject *obj);

#endif