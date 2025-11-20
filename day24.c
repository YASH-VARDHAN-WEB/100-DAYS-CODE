#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Number of rows

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Inner loop to print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to next row
    }

    return 0;
}
