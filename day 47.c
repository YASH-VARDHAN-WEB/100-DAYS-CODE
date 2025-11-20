#include <stdio.h>

int main() {
    char str1[200], str2[200];
    int freq[26] = {0};
    int i = 0;

    // Input two strings
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency for first string
    while (str1[i] != '\0') {
        char ch = str1[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;        // convert to lowercase
        if (ch >= 'a' && ch <= 'z')
            freq[ch - 'a']++;    // count
        i++;
    }

    // Reset index
    i = 0;

    // Subtract frequency for second string
    while (str2[i] != '\0') {
        char ch = str2[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;        // convert to lowercase
        if (ch >= 'a' && ch <= 'z')
            freq[ch - 'a']--;    // subtract
        i++;
    }

    // Check if all frequencies became zero
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");

    return 0;
}
