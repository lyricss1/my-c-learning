#include <stdio.h>
#include <string.h>

int extractWord(char* sentence, int startIndex, char* word);
int analyzeText(char* sentence);
int countWordOccurrences(char* sentence, char* targetWord);

int countWordOccurrences(char* sentence, char* targetWord) {
    int count = 0;
    int index = 0;
    char word[50];
    while (sentence[index] != '\0'){
        while (sentence[index]==' '){
            index++;
        }
        if (sentence[index]=='\0'){
            break;
        }
        index = extractWord(sentence, index, word);
        if (strcmp(word,targetWord)==0){
            count++;
        }
    }
    return count;
}

int extractWord(char* sentence, int startIndex, char* word){
    int i = 0;
    while(sentence[startIndex] != ' '&&sentence[startIndex] != '\0'){
        word[i]=sentence[startIndex];
        i++;
        startIndex++;
    }
    word[i] = '\0';
    return startIndex;
}

int analyzeText(char* sentence){
    int count = 0;
    int ins = 0;
    for(int i=0;sentence[i] != '\0'; i++){
        if(sentence[i] != ' ' && ins==0){
            count++;
            ins=1;
        }
        if (sentence[i]==' '){
            ins=0;
        }
    }
    return count;
}

int main() {
    char inputSentence[200];
    char searchWord[50];

    fgets(inputSentence, sizeof(inputSentence), stdin);
    inputSentence[strcspn(inputSentence, "\n")] = '\0';
    scanf("%s", searchWord);
    
    int anal = analyzeText(inputSentence);
    printf("Total words: %d\n",anal);
    int cunt = countWordOccurrences(inputSentence, searchWord);
    printf("Occurrences of '%s': %d\n",searchWord,cunt);
    float freq = 0.0f;
    if (anal>0) {
        freq = ((float)cunt/anal) * 100.0f;
        //XDDDDD
    }
    char* category;
    if (freq==0.0f){
        category = "Not found";
    }else if (freq<20.0f){
        category = "Rare";
    }else if (freq<=50.0f){
        category = "Common";
    }else{
        category = "Frequent";
    }
    printf("Frequency: %.1f%%\n",freq);
    printf("Category: %s\n",category);
    return 0;
}