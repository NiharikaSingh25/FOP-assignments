#include <stdio.h>

int main() {
    int n, i;
    int arr[100], even[100], odd[100];
    int e = 0, o = 0;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Partition into even and odd
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even[e] = arr[i];
            e++;
        } else {
            odd[o] = arr[i];
            o++;
        }
    }

    // Display even numbers
    printf("\nEven numbers: ");
    for(i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    // Display odd numbers
    printf("\nOdd numbers: ");
    for(i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}
