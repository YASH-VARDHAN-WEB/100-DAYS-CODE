#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num; // Store original number

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Sum the digits
    while (num != 0) {
        remainder = num % 10;  // Get last digit
        sum += remainder;      // Add it to sum
        num /= 10;             // Remove last digit
    }

    printf("Sum of digits of %d = %d\n", original, sum);

    return 0;
}
