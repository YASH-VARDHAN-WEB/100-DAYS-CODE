#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200], concat[400];

    // Input strings
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // If lengths differ, cannot be rotation
    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation.\n");
        return 0;
    }

    // Create str1 + str1
    strcpy(concat, str1);
    strcat(concat, str1);

    // Check if str2 is substring of concat
    if (strstr(concat, str2) != NULL)
        printf("Yes, it is a rotation.\n");
    else
        printf("No, it is NOT a rotation.\n");

    return 0;
}
