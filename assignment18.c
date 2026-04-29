#include <stdio.h>

int main() {
    char str[100], str2[100];
    int i, length = 0, flag = 1;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // 1. Length of string
    while(str[length] != '\0') {
        length++;
    }
    printf("Length = %d\n", length);

    // 2. Reverse string
    printf("Reversed string = ");
    for(i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    // 3. Equality check
    printf("Enter another string: ");
    scanf("%s", str2);

    i = 0;
    flag = 1;
    while(str[i] != '\0' || str2[i] != '\0') {
        if(str[i] != str2[i]) {
            flag = 0;
            break;
        }
        i++;
    }

    if(flag == 1)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // 4. Palindrome check
    flag = 1;
    for(i = 0; i < length/2; i++) {
        if(str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    // 5. Substring check
    int j, found = 0;
    for(i = 0; str[i] != '\0'; i++) {
        for(j = 0; str2[j] != '\0'; j++) {
            if(str[i + j] != str2[j])
                break;
        }
        if(str2[j] == '\0') {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Substring found\n");
    else
        printf("Substring not found\n");

    return 0;
}
