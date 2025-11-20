#include <stdio.h>

int main() {
    char str[200], rev[200];
    int i = 0, len = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Reverse string
    for (i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}
