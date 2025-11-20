#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};  // For 'a' to 'z'
    int i = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Scan characters and detect first repeating lowercase letter
    while (str[i] != '\0') {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {       // Only lowercase alphabets
            if (freq[ch - 'a'] == 1) {     // Already seen once → repeating
                printf("First repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
            freq[ch - 'a']++;              // Mark as seen
        }

        i++;
    }

    printf("No repeating lowercase alphabet found.\n");

    return 0;
}
