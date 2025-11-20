#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert lowercase to uppercase
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;   // Convert to uppercase
        }
        i++;
    }

    printf("Uppercase string: %s", str);

    return 0;
}
