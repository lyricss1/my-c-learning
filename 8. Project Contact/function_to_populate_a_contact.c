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
    scanf("%s",cont->name);
    printf("Enter phone: ");
    scanf("%s",cont->phone);
    printf("Enter email: ");
    scanf("%s",cont->email);
    printf("Enter age: ");
    scanf("%d",&cont->age);
    if(cont->age<0||cont->age>120){
        printf("Invalid age entered\n");
        return;
    }
    if(strlen(cont->phone)<10){
        printf("Invalid phone number\n");
        return;
    }
    printf("Contact populated successfully\n");
}

int main() {
    struct Contact *newContact;
    newContact = createContact();
    if(newContact == NULL){
        printf("Failed to create contact\n");
        return 1;
    }

    populateContact(newContact);
    printf("Contact Information:\n");
    printf("Name: %s\n",newContact->name);
    printf("Phone: %s\n",newContact->phone);
    printf("Email: %s\n",newContact->email);
    printf("Age: %d\n",newContact->age);
    free(newContact);
    printf("Contact deleted successfully\n");
    
    return 0;
}