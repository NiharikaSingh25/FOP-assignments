#include <stdio.h>

int main() {
    int num, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        digit = num % 10;              // get last digit
        reversed = reversed * 10 + digit; // build reversed number
        num = num / 10;               // remove last digit
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
