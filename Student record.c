#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
};

int main() {
    struct student s[5];
    int i;

    printf("Enter information of students:\n");

    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number %d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nDisplaying Information:\n");

    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", s[i].roll);
        printf("First name: %s\n", s[i].firstName);
        printf("Marks: %.1f\n", s[i].marks);
    }

    return 0;
}
