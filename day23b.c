#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Number of rows
    int cols = 5; // Number of columns

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (j = 1; j <= cols; j++) {
            printf("*");
        }
        printf("\n"); // Move to next row
    }

    return 0;
}
