#include <stdio.h>

int main() {
    int n;
    int matrix[100][100];
    int sum = 0;

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

    // Calculate sum of main diagonal
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    // Print result
    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
