#include <stdio.h>

int main() {
    int n;
    int matrix[100][100];
    int distinct = 1; // assume diagonal elements are distinct

    // Input size of square matrix
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if diagonal elements are distinct
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;  // found duplicate
                break;
            }
        }
        if (!distinct) break;
    }

    // Output result
    if (distinct)
        printf("\nDiagonal elements are distinct.\n");
    else
        printf("\nDiagonal elements are NOT distinct.\n");

    return 0;
}
