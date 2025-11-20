#include <stdio.h>

int main() {
    int n, i;

    // Input the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print numbers from 1 to n using for loop
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n"); // Newline at the end

    return 0;
}
