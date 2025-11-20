#include <stdio.h>

int main() {
    char str[300], longest[100];
    int i = 0, j = 0, maxLen = 0, currentLen = 0, start = 0;

    // Input sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        // If character is part of a word
        if (str[i] != ' ' && str[i] != '\n') {
            currentLen++;
        } 
        else {
            // Word ended — check if it's the longest
            if (currentLen > maxLen) {
                maxLen = currentLen;

                // Copy longest word
                for (j = 0; j < currentLen; j++)
                    longest[j] = str[i - currentLen + j];

                longest[currentLen] = '\0';
            }

            currentLen = 0;
        }

        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
