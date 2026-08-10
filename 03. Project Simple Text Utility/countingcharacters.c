#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter a sentence: \n");
    char sentence[200];
    scanf("%s",sentence);
    printf("You entered: %s\n",sentence);
    int val = strlen(sentence);
    int val2 = strlen(sentence);
    printf("Character count: %d\n",val2);
    printf("Length: %d\n",val);
    return 0;
}