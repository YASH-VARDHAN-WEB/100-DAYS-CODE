#include <stdio.h>

int main() {
    int arr[100], n, pos;

    // Input: size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input: array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: position to delete
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // Invalid position check
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements left to fill the gap
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Reduce size

    // Output: updated array
    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
