#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i;

    // Seed initialization
    srand(time(0));

    printf("Enter how many numbers to generate: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        int r = rand();   // generate random number
        printf("%d\n", r);
    }

    return 0;
}
