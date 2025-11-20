#include <stdio.h>

int main() {
    int a, b, hcf, lcm, tempA, tempB, temp;

    // Input two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    // Find HCF using Euclidean algorithm
    while (tempB != 0) {
        temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }
    hcf = tempA;

    // Calculate LCM
    lcm = (a * b) / hcf;

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
