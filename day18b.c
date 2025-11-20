#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    int x = a;
    int y = b;

    // Euclidean algorithm to find HCF
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    printf("HCF (GCD) of %d and %d is %d\n", a, b, x);

    return 0;
}
