#include <stdio.h>

int main() {
    int num, i;
    int binary[32]; // Array to store binary digits
    int index = 0;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num; // Store original number for display

    // Handle zero separately
    if (num == 0) {
        printf("Binary of 0 is 0\n");
        return 0;
    }

    // Convert to binary
    while (num > 0) {
        binary[index] = num % 2; // Store remainder (0 or 1)
        num /= 2;                 // Divide number by 2
        index++;
    }

    // Print binary in reverse order
    printf("Binary of %d is ", original);
    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
