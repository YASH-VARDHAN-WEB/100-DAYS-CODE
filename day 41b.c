#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reads input including spaces

    // Print each character on a new line
    while (str[i] != '\0') {
        if (str[i] != '\n')          // Skip printing newline from fgets
            printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
