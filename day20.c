#include <stdio.h>

int main() {
    int num, remainder;
    long long product = 1;  // Use long long to handle large numbers
    int hasOdd = 0;         // Flag to check if there is any odd digit

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num; // Store original number

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Find product of odd digits
    while (num != 0) {
        remainder = num % 10;      // Get last digit
        if (remainder % 2 != 0) {  // Check if digit is odd
            product *= remainder;
            hasOdd = 1;
        }
        num /= 10;                  // Remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits of %d = %lld\n", original, product);
    else
        printf("No odd digits found in %d\n", original);

    return 0;
}
