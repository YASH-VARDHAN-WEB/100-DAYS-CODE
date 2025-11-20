#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num; // Store original number for display

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;          // Get the last digit
        reversed = reversed * 10 + remainder; // Append digit
        num /= 10;                     // Remove last digit
    }

    printf("Reversed number of %d is %d\n", original, reversed);

    return 0;
}
