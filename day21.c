#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swappedNum;

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int original = num; // Store original number

    // Find last digit
    last = num % 10;

    // Find number of digits
    digits = 0;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Find first digit
    first = num;
    while (first >= 10) {
        first /= 10;
    }

    // Swap first and last digits
    swappedNum = last * pow(10, digits - 1) + 
                 (num % (int)pow(10, digits - 1) - last) + 
                 first;

    printf("Number after swapping first and last digits: %d\n", swappedNum);

    return 0;
}
