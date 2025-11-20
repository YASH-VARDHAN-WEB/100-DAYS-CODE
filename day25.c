#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Number of rows

    // Outer loop for rows
    for (i = rows; i >= 1; i--) {
        // Inner loop to print numbers from i to 5
        for (j = i; j <= rows; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next row
    }

    return 0;
}
