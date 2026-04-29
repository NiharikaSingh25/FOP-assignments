#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, sum = 0, term;
    int sign = 1;

    printf("Enter value of x (in degrees): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Convert degrees to radians
    x = x * 3.14159 / 180;

    for(i = 1; i <= n; i++) {
        term = pow(x, (2*i - 1)) / tgamma(2*i); // (2*i-1)! = tgamma(2*i)
        sum = sum + sign * term;
        sign = -sign; // alternate sign
    }

    printf("sin(x) = %.4f\n", sum);

    return 0;
}
