#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[100][100];
    int symmetric = 1;  // assume true

    // Input size (square matrix)
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;  // not symmetric
                break;
            }
        }
    }

    // Output result
    if (symmetric)
        printf("\nThe matrix is symmetric.\n");
    else
        printf("\nThe matrix is NOT symmetric.\n");

    return 0;
}
