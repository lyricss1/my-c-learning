#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char username[100];
    char password[100];
    int successful_logins = 0;
    
    for(int i=0;i<n;i++){
        scanf("%s",username);
        scanf("%s",password);

        int user_c = strcmp(username, "admin") == 0;
        int pass_c = strcmp(password, "secret123") == 0;

        if(user_c&&pass_c){
            printf("Login successful\n");
            successful_logins++;
        }
        else if(user_c&&!pass_c){
            printf("Invalid password\n");
        }
        else if(!user_c&&pass_c){
            printf("Invalid username\n");
        }
        else if(!user_c&&!pass_c){
            printf("Invalid credentials\n");
        }
        
    }
    printf("Total successful logins: %d\n", successful_logins);
    
    return 0;
}