#include <stdio.h>
#include <string.h>

struct Contact{
    char name[50];
    char phone[20];
    char email[40];
    int age;
};

int main() {
    struct Contact person;

    scanf("%s", person.name);
    scanf("%s", person.phone);
    scanf("%s", person.email);
    scanf("%d", &person.age);
    int personagetrue = 0;
    int personphonetrue = 0;
    if(person.age<0||person.age>120){
        printf("Invalid age\n");
        return 1;
    }else{
        personagetrue = 1;
    }
    if(strlen(person.phone)<10){
        printf("Invalid phone number\n");
        return 1;
    }else{
        personphonetrue = 1;
    }
    if(personagetrue==1&&personphonetrue==1){
        printf("Contact Information:\n");
        printf("Name: %s\n",person.name);
        printf("Phone: %s\n",person.phone);
        printf("Email: %s\n",person.email);
        printf("Age: %d\n",person.age);
        printf("Name length: %zu\n",strlen(person.name));
        if (person.age>=0&&person.age<= 17){
            printf("Category: Minor\n");
        }else if(person.age>=18&&person.age<=64){
            printf("Category: Adult\n");
        }else{
            printf("Category: Senior\n");
        }
    }
    return 0;
}