#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;

    // open source file (read mode)
    src = fopen("source.txt", "r");

    // open destination file (write mode)
    dest = fopen("dest.txt", "w");

    // check if files opened successfully
    if (src == NULL || dest == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // copy character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully\n");

    // close files
    fclose(src);
    fclose(dest);

    return 0;
}
