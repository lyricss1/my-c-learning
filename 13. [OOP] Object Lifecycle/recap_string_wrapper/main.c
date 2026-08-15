#include <stdio.h>
#include "stringobj.h"

int main() {
    char input[256];
    fgets(input, sizeof(input), stdin);
    int len = 0;
    while (input[len] != '\0') len++;
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }
    
    StringObject *text = create_string(input);
    print_string(text);
    free_string(text);
    printf("Freed");
    return 0;
}
