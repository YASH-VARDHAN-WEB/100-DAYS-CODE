#include <stdio.h>

int main() {
    char str[200];
    char ch;
    int i = 0, count = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Character to search
    printf("Enter the character to count: ");
    scanf("%c", &ch);

    // Count frequency
    while (str[i] != '\0') {
        if (str[i] == ch)
            count++;
        i++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
