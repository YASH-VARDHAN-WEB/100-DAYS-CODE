#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Maximum stars in the middle row (odd number)

    // Upper part of the pattern
    for (i = 1; i <= rows; i += 2) {  // Only odd numbers
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the pattern
    for (i = rows - 2; i >= 1; i -= 2) {  // Decreasing odd numbers
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
