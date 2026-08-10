#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatenateStrings(char* str1, char* str2){
    size_t leng = strlen(str1)+strlen(str2)+1;
    char* result = malloc(leng);
    if(result == NULL){
        return NULL;
    }
    strcpy(result, str1);
    strcat(result, str2);
    return result;
}

char* processText(char* word1, char* word2, char* separator){
    char* temp = concatenateStrings(word1, separator);
    char* result = concatenateStrings(temp, word2);
    free(temp);
    return result;
}

int main() {
    char firstWord[50];
    char secondWord[50];
    char connector[50];
    
    scanf("%s", firstWord);
    scanf("%s", secondWord);
    scanf("%s", connector);
    
    char* result = processText(firstWord, secondWord, connector);
    if(result == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }else{
        printf("Result: %s\n",result);
    }
    printf("Length: %zu\n", strlen(result));
    free(result);
    return 0;
}