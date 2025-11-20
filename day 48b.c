#include <stdio.h>

void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[300];
    int i = 0, wordStart = 0;

    // Input sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        // When a word ends (space or newline)
        if (str[i] == ' ' || str[i] == '\n') {
            reverse(str, wordStart, i - 1);
            wordStart = i + 1;  // next word starts
        }

        i++;
    }

    printf("Modified sentence: %s", str);

    return 0;
}
