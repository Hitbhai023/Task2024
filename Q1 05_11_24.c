#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int id;
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
    printf("\nEnter details for Employee %d\n", i + 1);
    printf("Employee ID: ");
    scanf("%d", &employees[i].id);
    printf("Name: ");
    scanf("%[^\n]");
    scanf("%s", employees[i].name);
    printf("Age: ");
    scanf("%d", &employees[i].age);
    printf("Salary: ");
    scanf("%f", &employees[i].salary);
    }
    
    printf("\nEmployee Details:\n");
    printf("-------------------------------------------------\n");
    printf("| %-10s | %-20s | %-5s | %-10s |\n", "ID", "Name", "Age", "Salary");
    printf("-------------------------------------------------\n");
    for (i = 0; i < n; i++) {
    printf("| %-10d | %-20s | %-5d | %-10.2f |\n", employees[i].id, employees[i].name, employees[i].age, employees[i].salary);
    }
    printf("-------------------------------------------------\n");

    return 0;
}
