#include <stdio.h>

struct Employee{
    int id;
    char department[15];
    int yearOfService;
    float salary;
};

int main() {
    /*struct Employee emp1 = {101, "Engineering", 5, 75000.50};
    struct Employee emp2 = {102, "Marketing", 3, 65000.25};
    struct Employee emp3 = {103, "Sales", 8, 80000.75};
    */
    struct Employee employees[3] = {
        {101, "Engineering", 5, 75000.50},
        {102, "Marketing", 3, 65000.25},
        {103, "Sales", 8, 80000.75}
    };
    float totalsal = 0;
    float totalyear = 0;
    for(int i=0;i<3;i++){
        printf("Employee %d:\n",i+1);
        printf("ID: %d\n",employees[i].id);
        printf("Department: %s\n",employees[i].department);
        printf("Years of Service: %d\n",employees[i].yearOfService);
        printf("Salary: %.2f\n",employees[i].salary);
        totalsal += employees[i].salary;
        totalyear += employees[i].yearOfService;
    }

    printf("Total Salary: %.2f\n",totalsal);
    printf("Average Years of Service: %.2f\n",totalyear/3);
    
    return 0;
}