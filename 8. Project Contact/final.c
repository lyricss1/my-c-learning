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
    printf("Name: %s\n",cont->name);
    printf("Phone: %s\n",cont->phone);
    printf("Email: %s\n",cont->email);
    printf("Age: %d\n",cont->age);
    if(strchr(cont->email, '@')==NULL){
        return;
    }
}

void updateContact(struct Contact *cont){
    int choice;
    printf("What would you like to update?\n1. Name\n2. Phone\n3. Email\n4. Age\n");
    printf("Enter choice (1-4): ");
    scanf("%d",&choice);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    if(choice == 1){
        printf("Enter new name: ");
        fgets(cont->name, sizeof(cont->name), stdin); 
        cont->name[strcspn(cont->name, "\n")] = '\0';
    }else if(choice == 2){
        printf("Enter new phone: ");
        fgets(cont->phone, sizeof(cont->phone), stdin); 
        cont->phone[strcspn(cont->phone, "\n")] = '\0';
    }else if(choice == 3){
        printf("Enter new email: ");
        fgets(cont->email, sizeof(cont->email), stdin); 
        cont->email[strcspn(cont->email, "\n")] = '\0';
    }else if(choice == 4){
        printf("Enter new age: ");
        scanf("%d",&cont->age);
        if(cont->age<0||cont->age>120){
            printf("Invalid age entered\n");
            return;
        }
    }else{
        printf("Invalid choice\n");
        return;
    }
    printf("Contact updated successfully\n");
}

int main() {
    struct Contact *newContact;
    newContact = createContact();
    if(newContact == NULL){
        printf("Failed to create contact\n");
        return 1;
    }
    populateContact(newContact);
    printf("--- Initial Contact ---\n");
    displayContact(newContact);
    printf("--- Updating Contact ---\n");
    updateContact(newContact);
    printf("--- Updated Contact ---\n");
    displayContact(newContact);
    free(newContact);
    printf("Contact management completed\n");
    
    return 0;
}