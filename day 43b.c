#include <stdio.h>

int main() {
    char str[200];
    int i = 0, len = 0, isPalindrome = 1;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length (excluding newline if present)
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Check palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
