#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float num1, num2, result;
    int n, i, fact = 1;

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Menu
    printf("\n--- MENU ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Factorial (of first number)\n");
    printf("7. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case 4:
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result = %.2f\n", result);
            } else {
                printf("Division by zero not allowed\n");
            }
            break;

        case 5:
            result = pow(num1, num2);
            printf("Result = %.2f\n", result);
            break;

        case 6:
            n = (int)num1;
            fact = 1;
            for(i = 1; i <= n; i++)
                fact *= i;
            printf("Factorial = %d\n", fact);
            break;

        case 7:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
