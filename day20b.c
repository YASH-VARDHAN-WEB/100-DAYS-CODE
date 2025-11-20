#include <stdio.h>

int main() {
    long long binary; // Input binary number
    long long original;
    int remainder;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    original = binary;
    printf("1's complement of %lld is ", original);

    // Process each digit
    while (binary != 0) {
        remainder = binary % 10; // Get last digit
        if (remainder == 0)
            printf("1");
        else if (remainder == 1)
            printf("0");
        else {
            printf("\nInvalid binary number!\n");
            return 1;
        }
        binary /= 10; // Remove last digit
    }

    printf("\n(Note: digits printed in reverse order)\n");
    return 0;
}
