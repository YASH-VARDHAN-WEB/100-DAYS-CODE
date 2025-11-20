#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    // Input number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Calculate sum of series
    int numerator = 2;
    int denominator = 3;

    for (i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;

        // Update numerator and denominator for next term
        numerator += 2;     // 2, 4, 6, 8 ...
        denominator += 4;   // 3, 7, 11, 15 ...
    }

    printf("Sum of the series up to %d terms = %.4lf\n", n, sum);

    return 0;
}
