#include <stdio.h>

int main() {
    int num, temp, digit;
    int count[10] = {0}; // Array to store frequency of digits 0-9

    // Input the number
    printf("Enter an integer number: ");
    scanf("%d", &num);

    temp = num > 0 ? num : -num; // Handle negative numbers

    // Count frequency of each digit
    while (temp != 0) {
        digit = temp % 10;
        count[digit]++;
        temp /= 10;
    }

    // Find the digit with maximum frequency
    int maxCount = 0, maxDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("The digit that occurs most frequently is: %d (occurs %d times)\n", maxDigit, maxCount);

    return 0;
}
