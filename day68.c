#include <stdio.h>

int main() {
    int n;

    // Input size n (array will have n elements but contains numbers 0 to n)
    scanf("%d", &n);

    int arr[n];
    
    // Input n numbers (one number from 0 to n is missing)
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Expected sum of numbers from 0 to n:
    // Sum = n * (n + 1) / 2
    int totalSum = n * (n + 1) / 2;

    // Calculate actual sum of the given array
    int arraySum = 0;
    for(int i = 0; i < n; i++) {
        arraySum += arr[i];
    }

    // Missing number = expected sum - actual sum
    int missing = totalSum - arraySum;

    // Print the missing number
    printf("%d\n", missing);

    return 0;
}
