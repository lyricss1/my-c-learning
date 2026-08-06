#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char word1[100], word2[100];
    char combined[200];
    char longest_combined[200] = "";
    
    for(int i=0;i<n;i++){
        scanf("%s",word1);
        scanf("%s",word2);
        int word1len = strlen(word1);
        int word2len = strlen(word2);
        printf("Word 1: %s (Length: %d)\n",word1,word1len);
        printf("Word 2: %s (Length: %d)\n",word2,word2len);
        if(strcmp(word1,word2)==0){
            printf("Comparison: identical\n");
        }else{
            printf("Comparison: different\n");
        }
        strcpy(combined,word1);
        strcat(combined, " ");
        strcat(combined,word2);
        printf("Combined: %s\n",combined);
        if(strlen(combined)>strlen(longest_combined)){
            strcpy(longest_combined, combined);
        }
    }
    printf("Longest combined string: %s\n",longest_combined);
    return 0;
}