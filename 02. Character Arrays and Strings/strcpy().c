#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char source[100];
    char destination[100];
    for(int i=0;i<n;i++){
        scanf("%s",source);
        strcpy(destination,source);
        printf("Source: %s\n",source);
        printf("Destination: %s\n",destination);

    }
    destination[0]='X';
    printf("Modified last destination: %s", destination);
    return 0;
}