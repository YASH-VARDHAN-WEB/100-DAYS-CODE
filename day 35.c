#include <stdio.h>

int main() {
    int arr[100], n;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("At least 2 elements are required!\n");
        return 0;
    }

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second = -2147483648; // Minimum possible int value

    // Find largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (second == -2147483648) {
        printf("There is no distinct second largest element.\n");
    } else {
        printf("Second largest element = %d\n", second);
    }

    return 0;
}
