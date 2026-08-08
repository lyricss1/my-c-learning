#include <stdio.h>

void print(int n){
    if(n<=0){
        return;
    }
    print(n-1);
    for(int i=0;i<n;i++){
        printf("+");
    }
    printf("\n");
}

int main() {
   print(5);
   return 0;
}