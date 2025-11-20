#include <stdio.h>

int main() {
    int rows, cols;
    int a[100][100];

    // Input rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input matrix
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

    // Traverse diagonals starting from first row
    for (int startCol = 0; startCol < cols; startCol++) {
        int i = 0, j = startCol;

        while (i < rows && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Traverse diagonals starting from last column (excluding first row)
    for (int startRow = 1; startRow < rows; startRow++) {
        int i = startRow, j = cols - 1;

        while (i < rows && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
