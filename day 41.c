#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // reads spaces too

    // Count characters manually
    while (str[count] != '\0') {
        count++;
    }

    // Subtract 1 if newline character is included
    if (str[count - 1] == '\n') {
        count--;
    }

    printf("Number of characters = %d\n", count);

    return 0;
}
