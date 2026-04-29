#include <stdio.h>

// Define structure
struct student {
    char name[50];
    int roll;
    float m1, m2, m3;
    float total, percentage;
};

int main() {
    struct student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input + Calculation
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i+1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Marks (3 subjects): ");
        scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);

        // Calculate total
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;

        // Calculate percentage
        s[i].percentage = s[i].total / 3;
    }

    // Display
    printf("\n--- Student Details ---\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll);
        printf("Total: %.2f\n", s[i].total);
        printf("Percentage: %.2f\n", s[i].percentage);
    }

    return 0;
}
