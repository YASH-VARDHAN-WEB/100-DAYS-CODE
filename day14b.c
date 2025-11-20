#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; // Use long long for large products

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the product of even numbers
    for(i = 2; i <= n; i += 2) { // Start from 2 and increment by 2
        product *= i;
    }

    // Check if there were no even numbers
    if (n < 2) {
        printf("No even numbers in the range 1 to %d.\n", n);
    } else {
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    }

    return 0;
}
