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
    }
    person->name[0] = '\0';
    person->phone[0] = '\0';
    person->email[0] = '\0';
    person->age = 0;
    return person;
}

void populateContact(struct Contact *cont){
    printf("Enter name: ");
    fgets(cont->name, sizeof(cont->name), stdin); 
    cont->name[strcspn(cont->name, "\n")] = '\0';

    printf("Enter phone: ");
    fgets(cont->phone, sizeof(cont->phone), stdin); 
    cont->phone[strcspn(cont->phone, "\n")] = '\0';

    printf("Enter email: ");
    fgets(cont->email, sizeof(cont->email), stdin); 
    cont->email[strcspn(cont->email, "\n")] = '\0';


    printf("Enter age: ");
    scanf("%d",&cont->age);
    if(cont->age<0||cont->age>120){
        printf("Invalid age entered\n");
        return;
    }
    /*if(strlen(cont->phone)<10){
        printf("Invalid phone number\n");
        return;
    }*/
    //printf("Contact populated successfully\n");
}

void displayContact(const struct Contact *cont){
    printf("=== CONTACT DETAILS ===\n");
    printf("Name: %s\n",cont->name);
    printf("Phone: %s\n",cont->phone);
    printf("Email: %s\n",cont->email);
    printf("Age: %d years old\n",cont->age);
    printf("========================\n");
    printf("Name length: %zu characters\n",strlen(cont->name));
    if(cont->age>=0&&cont->age<=12){
        printf("Generation: Child\n");
    }else if(cont->age>=13&&cont->age<=19){
        printf("Generation: Teenager\n");
    }else if(cont->age>=20&&cont->age<=39){
        printf("Generation: Young Adult\n");
    }else if(cont->age>=40&&cont->age<=59){
        printf("Generation: Middle-aged Adult\n");
    }else{
        printf("Generation: Senior\n");
    }
    if(strchr(cont->email, '@')==NULL){
        printf("Email format: Invalid\n");
    }else{
        printf("Email format: Valid\n");
    }
}

int main() {
    struct Contact *newContact;
    newContact = createContact();
    if(newContact == NULL){
        printf("Failed to create contact\n");
        return 1;
    }

    populateContact(newContact);
    displayContact(newContact);
    free(newContact);
    printf("Program completed successfully\n");
    
    return 0;
}