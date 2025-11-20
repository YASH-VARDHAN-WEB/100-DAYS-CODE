#include <stdio.h>

int main() {
    int arr[100], n, pos, value;

    // Input: size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input: array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: position and value
    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    // Shift elements to the right from end to position
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value
    arr[pos - 1] = value;
    n++;  // Increase size

    // Output: updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
