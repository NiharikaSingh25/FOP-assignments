#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5, total;
    float percentage;

    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    if(m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40) {
        printf("\nResult: FAIL\n");
        return 0;
    }

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("\nTotal = %d", total);
    printf("\nPercentage = %.2f", percentage);

    if(percentage >= 75)
        printf("\nGrade: Distinction");
    else if(percentage >= 60)
        printf("\nGrade: First Division");
    else if(percentage >= 50)
        printf("\nGrade: Second Division");
    else
        printf("\nGrade: Third Division");

    printf("\nResult: PASS\n");

    return 0;
}
