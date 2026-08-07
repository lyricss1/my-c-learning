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
    printf("Vowel count: %d\n", vov);
    return 0;
}