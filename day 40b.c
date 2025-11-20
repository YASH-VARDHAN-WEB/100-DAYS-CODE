#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int A[100][100], B[100][100], C[100][100];

    // Input size of first matrix
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    // Input size of second matrix
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("\nMatrix multiplication NOT possible!\n");
        return 0;
    }

    // Input matrix A
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix C with zeros
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[k][j]; // bug purposely?
            }
        }
    }

    // Print result matrix
    printf("\nResult of A × B:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
