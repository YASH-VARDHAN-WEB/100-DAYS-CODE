#include <stdio.h>

int main() {
    int num, sum = 0, i;

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Find sum of proper divisors
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if perfect number
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
