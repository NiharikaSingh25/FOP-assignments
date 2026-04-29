#include <stdio.h>
#include <math.h>

int main() {
    int n, i, flag = 1;
    long long fact = 1;
    int temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Square
    printf("Square = %d\n", n * n);

    // Cube
    printf("Cube = %d\n", n * n * n);

    // Square root
    printf("Square Root = %.2f\n", sqrt(n));

    // Prime check
    if(n <= 1) {
        flag = 0;
    } else {
        for(i = 2; i <= n/2; i++) {
            if(n % i == 0) {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");

    // Factorial
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }
    printf("Factorial = %lld\n", fact);

    // Prime factors
    temp = n;
    printf("Prime Factors: ");
    for(i = 2; i <= temp; i++) {
        while(temp % i == 0) {
            printf("%d ", i);
            temp = temp / i;
        }
    }

    return 0;
}
