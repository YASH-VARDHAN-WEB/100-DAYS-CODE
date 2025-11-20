#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, sum = 0, digits = 0;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num; // Store original number

    // Count number of digits
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of digits raised to the power of digits
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits); // digit^number_of_digits
        temp /= 10;
    }

    // Check if Armstrong
    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
