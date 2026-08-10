#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    printf("Enter a sentence: ");
    char sentence[200];
    scanf("%s",sentence);
    printf("Original: %s\n",sentence);
    int val = strlen(sentence);
    printf("Characters: %d\n",val);
    //printf("Length: %d\n",val);
    int vov = 0;
    for(int i=0;i<val;i++){
        if(sentence[i]=='a'||sentence[i]=='e'||
            sentence[i]=='i'||sentence[i]=='o'||
            sentence[i]=='u'||sentence[i]=='A'||
            sentence[i]=='E'||sentence[i]=='I'||
            sentence[i]=='O'||sentence[i]=='U'){
                vov++;
            }
    }
    printf("Vowels: %d\n", vov);
    printf("Uppercase: ");
    for(int i=0;i<val;i++){
        printf("%c", toupper(sentence[i]));
    }
    return 0;
}