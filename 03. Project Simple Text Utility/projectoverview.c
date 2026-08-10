#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter a sentence:\n");
    char sentence[200];
    scanf("%s",sentence);
    printf("You entered: %s\n",sentence);
    int val = strlen(sentence);
    printf("Length: %d\n",val);
    return 0;
}