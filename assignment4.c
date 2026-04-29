#include <stdio.h>

int main() {
    float basic, hra, ta, gross, tax, net;

    // Input
    printf("Enter Basic Pay: ");
    scanf("%f", &basic);

    // Calculations
    hra = 0.10 * basic;      // 10% HRA
    ta = 0.05 * basic;       // 5% TA
    gross = basic + hra + ta;
    tax = 0.02 * gross;      // 2% Professional Tax
    net = gross - tax;

    // Output
    printf("\nGross Salary = %.2f", gross);
    printf("\nNet Salary = %.2f", net);

    return 0;
}
