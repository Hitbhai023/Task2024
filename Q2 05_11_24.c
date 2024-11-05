#include <stdio.h>
#include <string.h>

#define NUM_SUBJECTS 3


struct Student {
    int roll_number;
    char name[50];
    float marks[NUM_SUBJECTS];
};

int main() {
    struct Student student;
    float total = 0, average;
    int i;

  
    printf("Enter student roll number: ");
    scanf("%d", &student.roll_number);
    printf("Enter student name: ");
    scanf("%s", student.name);
    printf("Enter marks for %d subjects:\n", NUM_SUBJECTS);
    for (i = 0; i < NUM_SUBJECTS; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &student.marks[i]);
        total += student.marks[i];
    }

    average = total / NUM_SUBJECTS;

    
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student.roll_number);
    printf("Name: %s\n", student.name);
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
