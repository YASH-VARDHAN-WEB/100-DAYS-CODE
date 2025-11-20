#include <stdio.h>

int main() {
    int n, sum = 0, i;

    // Input value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate sum using loop
    for(i = 1; i <= n; i++) {
        sum += i;  // sum = sum + i
    }

    // Display result
    printf("The sum of the first %d natural numbers is %d\n", n, sum);

    return 0;
}
