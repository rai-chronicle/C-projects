#include <stdio.h>

// Define the structure for student records
struct student {
    char firstName[50];
    int roll;
    float marks;
};

int main() {
    // Create an array of structures to store 5 students
    struct student s[5];
    int i;

    printf("Enter information of students:\n");

    // Storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1; // Assign roll numbers automatically
        printf("\nFor roll number %d,\n", s[i].roll);
        printf("Enter first name: ");
        // Use scanf to read the first name (stops at whitespace)
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nDisplaying Information:\n\n");

    // Displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", s[i].roll);
        printf("First name: %s\n", s[i].firstName);
        printf("Marks: %.1f\n", s[i].marks);
    }

    return 0;
}
