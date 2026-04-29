#include <stdio.h>

int main() {
    int binary, decimal = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while(binary > 0) {
        rem = binary % 10;        // get last digit (0 or 1)
        decimal = decimal + rem * base;
        binary = binary / 10;     // remove last digit
        base = base * 2;          // increase power of 2
    }

    printf("Decimal number = %d\n", decimal);

    return 0;
}
