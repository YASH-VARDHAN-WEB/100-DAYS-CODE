#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original, remainder, sum = 0;

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    original = num; // Store original number

    // Calculate sum of factorials of digits
    while (num != 0) {
        remainder = num % 10;
        sum += factorial(remainder);
        num /= 10;
    }

    // Check if strong number
    if (sum == original)
        printf("%d is a strong number.\n", original);
    else
        printf("%d is not a strong number.\n", original);

    return 0;
}
