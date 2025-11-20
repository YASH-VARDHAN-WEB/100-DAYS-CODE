#include <stdio.h>

int main() {
    // Group 1: 4 stars
    for (int i = 1; i <= 4; i++) {
        printf("*\n");
    }
    printf("\n"); // Blank line after first group

    // Group 2: 5 stars
    for (int i = 1; i <= 5; i++) {
        printf("*\n");
    }
    printf("\n"); // Blank line after second group

    // Group 3: 3 stars
    for (int i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n"); // Blank line after third group

    // Group 4: 1 star
    printf("*\n");

    return 0;
}
