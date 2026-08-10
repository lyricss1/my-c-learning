#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Contact{
    char name[50];
    char phone[20];
    char email[40];
    int age;
};

struct Contact *createContact(){
    struct Contact *person = malloc(sizeof(struct Contact));
    if(person == NULL){
        printf("Memory allocation failed\n");
        return NULL;
    }else{
        printf("Contact created successfully\n");
    }
    person->name[0] = '\0';
    person->phone[0] = '\0';
    person->email[0] = '\0';
    person->age = 0;
    return person;
}

int main() {
    struct Contact *newContact;
    newContact = createContact();
    if(newContact == NULL){
        printf("Failed to create contact\n");
        return 1;
    }else{
        printf("Contact initialized with default values\n");
    }

    printf("Default Contact Values:\n");
    printf("Name: %s\n",newContact->name);
    printf("Phone: %s\n",newContact->phone);
    printf("Email: %s\n",newContact->email);
    printf("Age: %d\n",newContact->age);
    free(newContact);
    printf("Memory freed successfully\n");
    
    return 0;
    /*scanf("%s", person.name);
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
    }*/
}